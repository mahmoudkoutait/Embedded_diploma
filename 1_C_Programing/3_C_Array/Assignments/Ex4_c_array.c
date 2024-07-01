/*
 ==============================================================================
 Name        : Ex4_c_array.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a program to insert an element in an array in specific
               location.
 ==============================================================================
 */

#include <stdio.h>
int main()
{
	int i,n,position,value;
	printf("enter number of elements: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++)
	{
		printf("enter element %d: ",i+1);
		fflush(stdin);		fflush(stdout);
		scanf("%d",&x[i]);
	}
	printf("enter the element will be inserted: \n");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&value);
	printf("enter position of elements (from %d to %d): \n",0,n);
	fflush(stdin);		fflush(stdout);
	scanf("%d",&position);
	if(position<0||position>n)
	{
		printf("the invalid position!!\n");
	}
	else
	{
		for(i=n;i>position;i--)
		{
			x[i]=x[i-1];
		}
		x[position]=value;
		n++;
		printf("array after insertion: \n");
		for(i=0;i<n;i++)
		{
			printf("%i",x[i]);
		}
	}
}

