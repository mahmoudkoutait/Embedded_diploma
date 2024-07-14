/*
 ============================================================================
 Name        : Ex4_c_functiones.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to calculate the power of a number using
               recursion
 ============================================================================
 */

#include <stdio.h>
int power(int n,int p);
int main()
{
	int num,po;
	printf("enter base number: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&num);
	printf("enter power number: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&po);
	if(po<0)
		printf("enter positive number!!");
	else if(po==0)
		printf("%d^0 = 1",num);
	else
	{
		printf("%d^%d = %d",num,po,power(num,po));
	}
}
int power(int n,int p)
{
	if(p!=1)
		return (n*power(n,p-1));
}

