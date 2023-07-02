#include<stdio.h>
#include<conio.h>
 void main()
 {
   int i=1,sum=0,n;
   clrscr();
   printf("enter value of n=");
   scanf("%d",&n);
   while(i<=n)
   {
     sum=sum+i;
     i++;
   }
     printf("sum=%d",sum);
     getch();
 }

