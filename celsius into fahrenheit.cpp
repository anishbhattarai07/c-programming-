#include<stdio.h>
int main()
	{
		int c,f=0;
	
		printf("Enter the celsius to convert into fahrenheit");
		scanf("%d",&c);
		f=(9.0/5.0)*c+32;
		printf("the celsius in fahrenheit is %d",f);
		return 0;
	}
