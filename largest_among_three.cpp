//Find the largest of three numbers.
#include<stdio.h>
int main()
	{
		int a,b,c;
		printf("Enter threenumbers");
		scanf("%d%d%d",&a,&b,&c);
		if(a>b&&b>c)
		printf("%d is greatest among three ",a);
		else if (b>c&&c>a)
		printf("%d is greatest among three ",b);
		else
		printf("%d is greatest among three ",c);
		return 0;
		
	}
