/*
 ============================================================================
 Name        : Ex3_loop&condition.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to find largest number among three numbers
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float x,y,z;
	printf("Enter three numbers: ");
	fflush(stdin);		fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);
	float largest=x;
	if(y>largest)
	{
		largest=y;
	}
	if(z>largest)
	{
		largest=z;
	}
	printf("Largest number =%f",largest);
}

