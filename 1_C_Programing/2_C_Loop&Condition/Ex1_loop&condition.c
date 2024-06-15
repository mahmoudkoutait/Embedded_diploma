/*
 ============================================================================
 Name        : Ex1_loop&condition.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to check whether a number is even or odd
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int num;
	printf("Enter the number you want to check: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&num);
	((num%2)==0)? printf("%d is even",num):printf("%d is odd",num);
}
