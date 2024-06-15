/*
 ============================================================================
 Name        : Ex3_c_basics.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to add two integers
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int x,y;
	printf("Enter two integers: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("sum: %d",x+y);
}
