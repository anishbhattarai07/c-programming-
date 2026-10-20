//Swap two numbers using a third variable.
#include<stdio.h>
int main()
	{
		int a,b,t=0;
		printf("Enter the two numbers for swap each other ");
		scanf("%d%d",&a,&b);
		t=a;
		a=b;
		b=t;
		printf("After the swapping,\nThe value of frist number is %d\nThe value of second number is %d",a,b);
		return 0;
	}
