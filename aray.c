//wap to add any five numbers in an array nums and count the number even numbers from them.
#include<stdio.h>
int main ()
	{
		int i,a[5],count=0;
		for(i=0;i<5;i++){
		printf("Enter five numbers");
		scanf("%d",&a[i]);
		
	}
		for(i=0;i<5;i++){
			if(a[i]%2==0)
			{
				count ++;
				
			}
		}
			
			printf("there are %d even numbers",count);
	return 0;
	}
