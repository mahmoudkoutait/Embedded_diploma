/*
 ============================================================================
 Name        : Ex3_c_functiones.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to reverse a sentence using recursion
 ============================================================================
 */

#include <stdio.h>
void reverse_sentence();
int main()
{
	printf("enter a sentence: ");
	reverse_sentence();
	return 0;
}

void reverse_sentence()
{
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
		reverse_sentence();
	}
		printf("%c",c);
}
