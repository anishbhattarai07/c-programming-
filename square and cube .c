#include<stdio.h>
int main()
	{
		int a,s=0,c=0;
		printf("Enter the number to find their square and cube.");
		scanf("%d",&a);
		s=a*a;
		c=a*a*a;
		printf("the square of %d is %d\n",a,s);
		printf("the cube of %d is %d",a,c);
		return 0;
	}
