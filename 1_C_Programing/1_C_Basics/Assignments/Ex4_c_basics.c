/*
 ============================================================================
 Name        : Ex4_c_basics.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write c program to multiply two floating point numbers
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float x,y;
	printf("Enter two numbers: ");
	fflush(stdin);		fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("product: %f",x*y);
}
