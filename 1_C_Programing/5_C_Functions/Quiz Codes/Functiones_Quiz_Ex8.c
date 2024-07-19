/*
 ============================================================================
 Name        : Functiones_Quiz_Ex8.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : write a function to print the last occurrence of number.
 ============================================================================
 */

#include <stdio.h>
int last(int arr[],int size);
int main()
{
	int x[100],s,i;
	printf("enter size of array: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		printf("enter the element %d: ",i+1);
		fflush(stdin);		fflush(stdout);
		scanf("%d",&x[i]);
	}
	int l=last(x,s);
	printf("the last occurence is: %d",l);
}
int last(int arr[],int size)
{
	int key,i;
	printf("enter the number you want to get last occurrence: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&key);
	for(i=size;i>0;i--)
	{
		if(arr[i]==key)
			return i+1;
	}
	return -1;
}
