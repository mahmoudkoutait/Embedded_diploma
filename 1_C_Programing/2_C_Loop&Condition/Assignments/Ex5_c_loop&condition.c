/*
 ============================================================================
 Name        : Ex5_loop&condition.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to check whether a character is an alphabet
               or not
 ============================================================================
 */

#include <stdio.h>

int main()
{
	char x;
	printf("Enter a character: ");
	fflush(stdin);		fflush(stdout);
	scanf("%c",&x);
	if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
		printf("%c is an alphabet ",x);
	else
		printf("%c ia not an alphabet ",x);
}
