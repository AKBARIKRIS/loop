#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	clrscr();
	printf("enter value frist leter = ");
	scanf("%d",&i);
	printf("enter value last leter = ");
	scanf("%d",&n);
	while(i>=n)
	{
		printf("%d\n",i);
		i--;
	}
	getch();
}
