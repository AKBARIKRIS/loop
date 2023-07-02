#include<stdio.h>
#include<conio.h>
 void main()
 {
   int i=1,f=1,n;
   clrscr();
   printf("enter value of n=");
   scanf("%d",&n);
   while(i<=n)
   {
     f=f*i;
     i++;
   }
   printf("the answer is  %d ",f);
   getch();
 }
