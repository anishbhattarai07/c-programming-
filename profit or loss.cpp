#include<stdio.h>
int main()
	{
		int a,b;
		printf("Enter C.P and S.P to determine whether it is loss or profit. ");
		scanf("%d%d",&a,&b);
		if(a>b)
			{
				printf("It is loss.");
				
			}
		else{
		
			printf("It is profit ");
			}
			return 0;
	}
