/*
 ============================================================================
 Name        : Functiones_Quiz_Ex1.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a c program takes string from the user and check if it
 	 	 	   the same user name or not.
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char text[100],name[100];
	int result;
	printf("enter a string: ");
	fflush(stdin);		fflush(stdout);
	gets(text);
	printf("enter your name: ");
	fflush(stdin);		fflush(stdout);
	gets(name);
	result=stricmp(text,name);
	if(result==0)
		printf("identical");
	else
		printf("diffrent");
}
