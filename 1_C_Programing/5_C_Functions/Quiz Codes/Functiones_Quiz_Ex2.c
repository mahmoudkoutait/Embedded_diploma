/*
 ============================================================================
 Name        : Functiones_Quiz_Ex2.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to swapping 2 arrays with different lengths.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int x[10],y[10],z[10],i;
	printf("enter first array: \n");
	fflush(stdout);		fflush(stdin);
	for(i=0;i<10;i++)
		scanf("%d",&x[i]);
	printf("enter second array: \n");
	fflush(stdout);		fflush(stdin);
	for(i=0;i<5;i++)
		scanf("%d",&y[i]);
	printf("arrays before swaping: \n");
	printf("first array: \n");
	for(i=0;i<10;i++)
		printf("%d\t",x[i]);
	fflush(stdout);		fflush(stdin);
	printf("\nsecond array: \n");
	for(i=0;i<5;i++)
		printf("%d\t",y[i]);
	fflush(stdout);		fflush(stdin);
	for(i=0;i<10;i++)
	{
		z[i]=x[i];
		x[i]=y[i];
		y[i]=z[i];
	}
	printf("\n\narrays after swapping: \n");
	printf("first array: \n");
	for(i=0;i<5;i++)
		printf("%d\t",x[i]);
	printf("\nsecond array: \n");
	for(i=0;i<10;i++)
		printf("%d\t",y[i]);
}
