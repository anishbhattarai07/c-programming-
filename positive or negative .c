//Check whether a number is positive, negative, or zero.
#include<stdio.h>
int main()
	{
		int a;
		printf("Enter the number to determine wheather it is positive,negative or zero.\n ");
		scanf("%d",&a);
		if(a>0)
		{printf("%d is positive number",a);
		
		}
		else if (a<0)
		{printf("%d is negative number",a);
		
		}
		else 
		{printf("%d is zero ",a);
		}
	}
