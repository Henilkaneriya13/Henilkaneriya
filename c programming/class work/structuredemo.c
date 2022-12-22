#include<stdio.h>


struct employee
{
	int eid;
	char ename[10];
	float esal;
};

void main()
{


	struct employee emp;
	printf("\nenter id : ");
	scanf("%d",&emp.eid);
	printf("\nenter name : ");
	scanf("%s",&emp.ename);
	printf("\nenter salary : ");
	scanf("%f",&emp.esal);
	
	
	printf("\n\n-----details------\n\n");
	printf("\nid : %d",emp.eid);
	printf("\name : %s",emp.ename);
	printf("\nsalary : %f",emp.esal);	
}