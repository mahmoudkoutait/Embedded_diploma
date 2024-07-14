/*
 ===============================================================================
 Name        : Ex2_c_functiones.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to calculate factorial of number using recursion
 ===============================================================================
 */

#include <stdio.h>
int factorial(int n);
int main()
{
	int num;
	printf("enter the number: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&num);
	if(num<0)
	{
		printf("please enter a positive number");
	}
	else if(num==0)
	{
		printf("factorial of 0 = 1 ");
	}
	else
	{
		printf("factorial of %d = %d",num,factorial(num));
	}
}
int factorial(int n)
{
	if(n!=1)
		return n*factorial(n-1);
}

