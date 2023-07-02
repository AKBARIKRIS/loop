#include<stdio.h>
#include<conio.h>
 void main()
 {
 int i=2000,n;
 clrscr();
 printf("enter value =");
 scanf("%d",&n);

 while(i<=n)
  {
    if(i%4==0)
    {
      printf("%d \t",i);
    }
    i++;
  }

   getch();
 }
