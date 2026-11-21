#include<stdio.h>
struct book{
	char title[20];
	char author[20];
	int price;
	char genre[20];
	int number;
	
}b;
void main()
	{printf("enter the title author price genre and number of the book");
	scanf("%s%s%d%s%d",b.title,b.author,&b.price,b.genre,&b.number);
	printf(" data are %s\t%s\t%d\t%s\t%d",b.title,b.author,b.price,b.genre,b.number);
	
	}
