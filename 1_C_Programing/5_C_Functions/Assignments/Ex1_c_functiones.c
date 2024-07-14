/*
 ============================================================================
 Name        : Ex1_c_functiones.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to find a prime numbers between two numbers
               by making user defined function
 ============================================================================
 */

#include <stdio.h>
int prime_check(int num);
int main()
{
	int num1,num2,i,prime;
	printf("enter first number of interval: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&num1);
	printf("enter last numbers of interval: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&num2);
	if(num1>num2)
		printf("invalid interval!!\n");
	else
	{
		printf("prime numbers between %d and %d are: \n",num1,num2);
		for(i=num1+1;i<num2;i++)
		{
			prime=prime_check(i);
			if(prime==0)
			{
				printf("%d  ",i);
			}
		}
		return 0;
	}
}

int prime_check(int num)
{
	int i,sign=0;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			sign=1;
			break;
		}
	}
	return sign;
}
