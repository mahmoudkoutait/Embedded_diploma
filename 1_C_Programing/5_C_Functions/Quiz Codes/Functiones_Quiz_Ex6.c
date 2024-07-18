/*
 ============================================================================
 Name        : Functiones_Quiz_Ex6.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to know the value of the forth least significant
               bit in binary.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int n,k,c;
	printf("enter an integer in decimal system: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&n);
	printf("\n%d in binary number system is: ",n);
	for(c=31;c>=0;c--)
	{
		k=n>>c;
		if(k&1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	k=n>>3;
			if(k&1)
				printf("4th least significant bit is 1");
			else
				printf("4th least significant bit is 0");
	return 0;
}
