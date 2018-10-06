#include "HMithian.h"
// Factorial avec une boucle for.
int factorial1(int n){
	int res = 1;
	for(int i = 2; i<=n;i++){
		res*=i;
	}
	return res;
};


// Factorial avec fonction recursive := fonction qui est appelé par elle même.
int factorial2(int n){
	if(n > 0){
		return n * factorial2(n - 1);
	}
	return 1;
};