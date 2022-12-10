#include<stdio.h>

void main()
{ 
 
 	int arr1[5],arr2[5];
 	int i;
 
	 printf("\n enter array 1 element : \n");
	 for(i=0;i<5;i++)
	 {
	 	scanf("%d",&arr1[i]);
	 }
	 
	 printf("\n enter array 2 element : \n");
	 for(i=0;i<5;i++)
	 {
	 	scanf("%d",&arr2[i]);
	 }
	 
	 printf("\n\narray 1 elements are : \n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr1[i]);
	}
	printf("\n\naddition of two array : \n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr1[i]+arr2[i]);
	}
}