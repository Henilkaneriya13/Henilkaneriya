#include<stdio.h>
void add()
{
	int a = 10,b = 20;
	printf("\naddition %d",(a+b));
}
void sub()
{
	int a = 10,b = 20;
	printf("\nsubstraction %d",(a-b));
}
void mul()
{
	int a = 10,b = 20;
	printf("\nmultiplication %d",(a*b));
}
void div()
{
	int a = 10,b = 20;
	printf("\ndivision %d",(a/b));
}
void main()
{
	 
	 int n;
	 
	 printf("\n---------------------------------\n");
	 printf("\t\t choice menu");
	 printf("\n---------------------------------\n");
	 printf("\n\npress 1 for addition");
	 printf("\n\npress 2 for substrection");
	 printf("\n\npress 3 for multiplication");
	 printf("\n\npress 4 for division");
	 printf("\n\nenter ypur choice : ");
	 scanf("%d",&n);
	 switch(n)
	 
	 {
	 	case 1 :
	 		printf("\n");
	 		add();
	 		break;
	    case 2 :
	 		printf("\n");
	 		sub();
	 		break;
		case 3 :
	 		printf("\n");
	 		mul();
	 		break;
		case 4 :
	 		printf("\n");
	 		div();
	 		break;
	 		defalut:
	 			printf("\ninvalid input");
	 			break;
	 }
	 
	 
	 
	 
	 
	 
	 
}