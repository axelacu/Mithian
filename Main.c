#include <stdio.h> //appel à la librerie entrée sorti.
#include "HMithian.h" //appel à la librerie HMithian. Fait attention il y a de guillemet.
//fonction main.
int main(int argc, char const *argv[])
{
	printf("Fonction for : %d\n", factorial1(6) );
	printf("Fonction recursive : %d\n", factorial2(6));
	return 0;
}