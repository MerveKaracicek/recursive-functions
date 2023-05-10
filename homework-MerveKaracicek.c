#include <stdio.h>
#include <stdlib.h>


//Calculate factorial:
int factorial(int number){
	if (number==1 || number==0) {
	return 1;
	}
    else {
    return  number*factorial(number-1);
	}
		
}

//Calculate even sum in range:
int evenSum(int bottom,int top){
	if (bottom>top){
		return 0;
	}
     else if (bottom%2==0){
     	return bottom+evenSum(bottom+2,top);
	 }
	 else {
	 	return evenSum(bottom+1,top);
	 }
}
int main(int argc, char *argv[]) {
	
	//Use function called "factorial"
	int number;
	
	printf("Enter a number: ");
	scanf("%d",&number);
	
	printf("Factorial is: %d\n",factorial(number));
	
	
	
	//Use function called "evenSum".It helps us to calculate even number in range adding with each other.
	int bottom,top;
	
	printf("Enter bottom number:");
	scanf("%d",&bottom);
	
	printf("Enter top number:");
	scanf("%d",&top);
	
	printf("Even sum is :%d",evenSum(bottom,top));
	
	return 0;
	
	
}
