/*
 ============================================================================
 Name        : Ex3_c_string.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to reverse string without using library
               function.
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
int main()
{
	char string[100],temp;
	int i,j=0;
	printf("enter the string: ");
	fflush(stdin);		fflush(stdout);
	gets(string);
	j=strlen(string)-1;
	while(i<j)
	{
		temp=string[i];
		string[i]=string[j];
		string[j]=temp;
		i++;
		j--;
	}
	printf("reverse string: %s",string);
	return 0;
}
