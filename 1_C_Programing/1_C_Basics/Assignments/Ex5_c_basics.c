/*
 ============================================================================
 Name        : Ex5_c_basics.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to find ASCII value of a character
 ============================================================================
 */

#include <stdio.h>

int main()
{
	char x;
	printf("Enter a character: ");
	fflush(stdin);		fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of %c =%d",x,x);
}
