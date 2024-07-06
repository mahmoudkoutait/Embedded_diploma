/*
 ============================================================================
 Name        : Ex1_c_string.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to find the frequency of characters in a string
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
int main()
{
	char string[1000];
	char ch;
	int i,frequncy=0;
	printf("enter a string: ");
	fflush(stdin);		fflush(stdout);
	gets(string);
	printf("enter a character to find frequency: ");
	fflush(stdin);		fflush(stdout);
	scanf("%c",&ch);
	for(i=0;string[i]!=0 && i<strlen(string);i++)
	{
		if(ch==string[i])
		{
			frequncy++;
		}
	}
	printf("frequncy of %c = %d",ch,frequncy);
	return 0;
}
