/*
 =============================================================================
 Name        : EX4_loop&condition.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to check whether a number positive or negative
 =============================================================================
 */

#include <stdio.h>

int main()
{
	float x;
	printf("Enter a number: ");
	fflush(stdin);		fflush(stdout);
	scanf("%f",&x);
	if(x==0)
	{
		printf("you entered zero ");
	}
	else
		(x>0)? printf("%.3f is positive ",x):printf("%.3f is negative ",x);
}
