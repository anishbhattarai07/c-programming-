#include<stdio.h>
int main()
	{
		int a,h,m,s,r;
		printf("Enter the second to convert into hour,minute and second ");
		scanf("%d",&a);
		h=a/3600;
		r=a%3600;
		m=r/60;
		s=r%60;
		printf("hour%d minute%d second %s",h,m,s);
		return 0;		
		
		
		
	}
