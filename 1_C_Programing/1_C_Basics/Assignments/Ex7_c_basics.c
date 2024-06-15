/*
 ============================================================================
 Name        : Ex7_c_basics.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a source code to swap two numbers without temp variable
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float x,y;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("after swapping, value of a=%.2f ",x);
	printf("after swapping, value of b=%.2f ",y);
}
