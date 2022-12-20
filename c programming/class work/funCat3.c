#include<stdio.h>
 
 int add(int a ,int b)
 {
 	printf("\nin function a = %d,b = %d",a,b);
 	return a+b;
 }
 void main()
 {
 	int res;
 	res = add(54,56);
 	
 	//printf("%d ,add(47,87));
 	printf("%d",res);
 	
 	if(res%2==0)
	 {
	 printf("\n%d is even",res);	
	 }
	 else
	 {
	 	printf("\n%d is odd,res");
	 }
 }