/*
 ============================================================================
 Name        : Ex6_c_basics.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a source code to swap two numbers
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float x,y,temp;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&y);
	temp=x;
	x=y;
	y=temp;
	printf("after swapping, value of a=%.2f ",x);
	printf("after swapping, value of b=%.2f ",y);
}
