/*
 ============================================================================
 Name        : Ex7_loop&condition.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to find factorial of number
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int num,i;
	unsigned long factorial=1;
	printf("Enter an integer: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&num);
	if(num<1)
	{
		if(num==0)
			printf("Factorial= 1 ");
		else
			printf("Erorr!, Factorial of negative number does not exist ");
	}
	else
	{
		for(i=1;i<=num;++i)
		{
			factorial*=i;
		}
		printf("Factorial= %lu",factorial);
	}
}
