#include<stdio.h>
#include<conio.h>

main()
{
int i,n;
  clrscr();
  printf("emter value frist leter=");
  scanf("%d",&i);
  printf("enter value =");
  scanf("%d",&n);
  while(i<=n)
  {
     printf("%d \t",i);
     i++;
  }

  getch();
  }