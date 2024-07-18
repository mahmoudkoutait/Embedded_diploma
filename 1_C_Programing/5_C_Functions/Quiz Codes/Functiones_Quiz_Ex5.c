/*
 ============================================================================
 Name        : Functiones_Quiz_Ex5.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a function that clears bit in a given number.
 ============================================================================
 */

#include <stdio.h>
int clear(int a,int b);
int main()
{
	int n,bit;
	printf("enter the number:");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&n);
	printf("enter bit position:");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&bit);
	printf("result = %d",clear(n,bit));
}
int clear(int a,int b)
{
	return (a&=~(1<<b));
}
