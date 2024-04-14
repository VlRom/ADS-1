// Copyright 2022 NNTU-CS
#include <valarray>
#include "alg.h"


bool checkPrime(uint64_t value) {
	if (value<=1){
		return false;
	}
	for (uint64_t i=2; i<=sqrt(value); i++) {
		if (value % i == 0) {
			return false;
		}
	}
	return true;
}

uint64_t nPrime(uint64_t n) {
	uint64_t pNumber = 2;
	uint64_t count = 0;
	while(true){
		if (checkPrime(pNumber)){
			count++;
		}
		if (count == n) {
			return pNumber;
		}
		pNumber++;
	}
}

uint64_t nextPrime(uint64_t value) {
	uint64_t pNumber = value+1;
	while(!checkPrime(pNumber)){
		pNumber++;
	}
	return pNumber;
}

uint64_t sumPrime(uint64_t hbound) {
	uint64_t summa = 0;
	for (uint64_t i=2; i<hbound; i++) {
		if (checkPrime(i)) {
			summa += i;
		}
	}
	return summa;
}
