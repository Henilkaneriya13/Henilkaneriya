#include<stdio.h>

void main()
{
	int arr1[5];
	int i;
	
	printf("\nenter array 1 elements : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	printf("\n\narray 1 elements are : \n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr1[i]);
	}
}