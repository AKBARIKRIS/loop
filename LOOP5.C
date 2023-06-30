#include<stdio.h>
#include<conio.h>
main()
{
	int i=0;
	clrscr();

	while(i<=25)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	getch();
}
