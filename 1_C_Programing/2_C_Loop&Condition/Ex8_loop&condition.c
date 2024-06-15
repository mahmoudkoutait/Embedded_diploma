/*
 ============================================================================
 Name        : Ex8_loop&condition.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to make simple calculator to add,
               subtract, multiply or divide using switch case
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float x,y,z;
	printf("Enter two numbers: ");
	fflush(stdin);		fflush(stdout);
	scanf("%f%f",&x,&y);
	char op;
	printf("Enter an operator(+,-,*,/): ");
	fflush(stdin);		fflush(stdout);
	scanf("%c",&op);
	switch(op)
	{
	case'+':
		z=x+y;
		break;
	case'-':
		z=x-y;
		break;
	case'*':
		z=x*y;
		break;
	case'/':
		z=x/y;
		break;
	default:
		printf("Error!, operator is not correct ");
		break;
	}
	printf("%.2f%c%.2f = %.2f",x,op,y,z);
}
