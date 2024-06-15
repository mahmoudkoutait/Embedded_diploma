/*
 ============================================================================
 Name        : Ex6_loop&condition.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to calculate sum of natural numbers
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int i,n,sum=0;
	printf("Enter an integer: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum=%d ",sum);
}
