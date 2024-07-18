/*
 ============================================================================
 Name        : Functiones_Quiz_Ex3.c
 Author      : mahmoudkoutait
 Copyright   : Your copyright notice
 Description : Write a c function that reverse an input array.
 ============================================================================
 */

#include <stdio.h>
void reverse(int s,int array[100]);
int main()
{
	int a[100],i,size;
	printf("enter the size of array: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("enter element %d: ",i+1);
		fflush(stdin);		fflush(stdout);
		scanf("%d",&a[i]);
	}
	reverse(size,a);
}
void reverse(int s,int array[100])
{
	int i;
	printf("the reverse array:");
	for(i=s-1;i>=0;i--)
		printf("%d\t",array[i]);
}
