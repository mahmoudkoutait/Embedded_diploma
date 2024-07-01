/*
 ============================================================================
 Name        : Ex3_c_array.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to ask user to enter a matrix and the size of it
               and find the transpose of the matrix and display it.
 ============================================================================
 */

#include <stdio.h>
int main()
{
	int n;
	printf("enter size of matrix: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&n);
	float x[n][n];
	float t[n][n];
	int r,c=n;
	r=c;
	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		{
			printf("enter the item (%d,%d): \n",r,c);
			fflush(stdin);		fflush(stdout);
			scanf("%f",&x[r][c]);
		}
	}
	printf("the matrix is\n");
	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		{
			printf("%2.2f\t",x[r][c]);
		}
		printf("\n\n");
	}
	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		{
			t[c][r]=x[r][c];
		}
	}
	printf("transpose matrix is\n");
	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		{

			printf("%2.2f\t",t[r][c]);
		}
		printf("\n\n");
	}
}
