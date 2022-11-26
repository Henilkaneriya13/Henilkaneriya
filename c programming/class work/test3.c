#include<stdio.h>

void main()
{
	
	int age;
	char name[30];
	float salary;
	
	
	printf("\n\n\xB2\xB2\xB2\xB2\xB2\xB2  personal detail  \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	
	
	printf("\n Enter your name : ");
	//scanf("%s",&name);
	gets(name);
	printf("enter your age : ");
	scanf("%d",&age);
	printf("enter your salary : ");
	scanf("%f",&salary);
	
	printf("\nname is :%s",name);
	printf("\nage is :%d",age);
	printf("\nsalary is :%f",salary);
	}
