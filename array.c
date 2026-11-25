//wap to display 3*3 matrix by taking value from the user 
#include<stdio.h>
int main()
	{
		int a[3][3],i,j;
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++){
		
		printf("enter a 3*3matrix");
		scanf("%d",&a[i][j]);
		}
		}
		
		//display 
			for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++){
		
		printf("3*3matrix is %d	",a[i][j]);
	
		}
		}
		return 0;
	}
