#include<stdio.h>
int main()
	{
		int l,b,a=0,p=0;
		printf("Enter the length and breadth to calculate area and perimeter of rectangle.");
		scanf("%d%d",&l,&b);
		a=l*b;
		p=2*(l+b);
		printf("The area of rectangle is %d\nThe perimeter of rectangle is %d",a,p);
		return 0;
	}
