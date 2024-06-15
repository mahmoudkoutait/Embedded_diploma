/*
 ============================================================================
 Name        : Ex2_c_basics.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write c program to print a integer entered by a user
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int x;
	printf("Enter a integer: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&x);
	printf("You entered: %d ",x);
}
