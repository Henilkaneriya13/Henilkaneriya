#include<stdio.h>

void work(int a )
{
	printf("in function a = %d",a);
	if(a%2==0)
	{
		printf("\n %d is even",a);
	
	}
	else
	{
		printf("\n %d is odd",a);
	}
}
void main()
{
	int a ;
	printf("\nenter value : ");
	scanf("%d",&a);
	work(a);
}