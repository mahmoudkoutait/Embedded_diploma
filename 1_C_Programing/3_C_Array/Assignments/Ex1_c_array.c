/*
 ============================================================================
 Name        : Ex1_c_array.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a c program to find sum of two matrix of order 2*2 using
               multidimensional array where elements of array entered by user.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float x[2][2],y[2][2],z[2][2];
	int i,j;
	printf("Enter the elements of 1st matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter %d%d: ",i+1,j+1);
			fflush(stdin);		fflush(stdout);
			scanf("%f",&x[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter %d%d: ",i+1,j+1);
			fflush(stdin);		fflush(stdout);
			scanf("%f",&y[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			z[i][j]=x[i][j]+y[i][j];
		}
	}
	printf("Sum of matrix: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%.2f\t",z[i][j]);

		}
		printf("\n");
	}
}
