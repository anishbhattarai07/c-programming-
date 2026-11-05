//Create a calculator using switch (+, -, *, /).
#include<stdio.h>
int main()
	{
		int a,b,sum=0,sub=0,mul=0,div=0,c;
		printf("Enter 1 if you want to add two numbers \nEnter 2 if you want to subtract two numbers\nEnter 3 if you want to multiplication of two numbers\nEnter 4 if you want to divide two numbers\n");
		scanf("%d",&c);
		printf("enter two numbers\n");
		scanf("%d%d",&a,&b);
		sum=a+b;
		sub=a-b;
		mul=a*b;
		div=a/b;
		switch(c)
		{
		case 1:
		
		printf("the sum of two numbers is %d",sum);
		break;
		case 2:
		
		printf("the subtratction betwn two numbers is %d",sub);
		break;
		case 3:
	
		printf("the multiplication betwn two number is %d",mul);
		break;
		case 4:
		
		printf("the division betwn two numbers is %d ",div);
		break;
		
		}
		return 0;
			}
