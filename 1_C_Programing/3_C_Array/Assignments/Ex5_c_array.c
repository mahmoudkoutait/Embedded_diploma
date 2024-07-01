/*
 ============================================================================
 Name        : Ex5_c_array.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to search for element in an array.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int element,n,i;
	printf("enter number of elements: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&n);
	int x[n];
	printf("enter the elements: \n");
	for(i=0;i<n;i++)
	{
		printf("%d: ",i+1);
		fflush(stdin);		fflush(stdout);
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",x[i]);
	}
	printf("\nenter the element to be searched: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&element);
	i=0;
	while(i<n)
	{
		if(element==x[i])
		{
			printf("number found at location: %d",i+1);
			break;
		}
		i++;
	}
}
