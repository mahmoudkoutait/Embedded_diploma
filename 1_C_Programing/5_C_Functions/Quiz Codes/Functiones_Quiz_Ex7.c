/*
 ============================================================================
 Name        : Functiones_Quiz_Ex7.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a c program to check if a given number is power of 3.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
int check(int n);
int main()
{
	int n;
	printf("enter the number: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&n);
	check(n)? printf("true"):printf("false");
}
int check(int n)
{
	double i=log(n)/log(3);
	return i==trunc(i);
}
