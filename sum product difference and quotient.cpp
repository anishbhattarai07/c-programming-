#include<stdio.h>
int main()
	{
		//input two numbers and display sum, difference, product, and quotient.
		int a,b,sum=0,p=0,d=0;
		float q=0;
		
		printf("enter two number to determine their sum , difference, product, and quotient.");
		scanf("%d%d",&a,&b);
		sum=a+b;
		d=a-b;
		p=a*b;
		printf("the sum of two number is %d\n",sum);
		printf("the difference of two number is %d\n",d);
		printf("the product of two number is %d\n",p);
		if (b!=0){
		q=(float)a/b;
		printf("the quotient of two number is %.2f\n",q);
		}
		else
			{
				printf("the quotient is undefined");
				
			}
		return 0;
	}
