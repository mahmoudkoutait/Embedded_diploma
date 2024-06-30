/*
 ============================================================================
 Name        : Ex2_c_array.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program takes n numbers of elements from user and stores
               data in array and calculate the average of this elements.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int n,i;
	printf("Enter the number of data: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&n);
	float x[n],sum=0;
	for(i=0;i<n;i++)
	{
		printf("enter number %d: ",i+1);
		fflush(stdin);		fflush(stdout);
		scanf("%f",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+x[i];
	}
	printf("average= %.2f",sum/n);
}
