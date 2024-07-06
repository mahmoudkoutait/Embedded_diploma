/*
 ============================================================================
 Name        : Ex2_c_string.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to find the length of s string
 ============================================================================
 */

#include <stdio.h>
int main()
{
	char string[100];
	int length=0,i;
	printf("enter a string: ");
	fflush(stdin);		fflush(stdout);
	gets(string);
	for(i=0;string[i]!=0;i++)
		length++;
	printf("length of string: %d",length);
}
