#include <stdio.h>
//1. validated credit card
	//iterate over input. 
	//
//2. if valid, check card for patterns that correspond to 
//specific banks 

int checkValidity(long int credit);

int main(void){
	long int credit;

	printf("enter your credit card number: ");
	scanf("%ld", &credit);
	checkValidity(credit);
}

int checkValidity(long int credit){
	//Luhn's alogrithm
	
	printf("\n Credit: %ld", credit);
	
	return credit;
}

