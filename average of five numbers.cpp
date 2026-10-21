//Calculate the average of five numbers.
#include<stdio.h>
int main()
	{
		int a,b,c,d,e,avg=0;
		printf("enter five numbers");
		scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
		avg=(a+b+c+d+e)/5;
		printf("the avg of five numbers is %d",avg);
		return 0;
	}
