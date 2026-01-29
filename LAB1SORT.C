#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,i,t=0;
t=t+1;
clrscr();
printf("enter  the n number \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
   {
   t=t+3;
   sum=sum+i;
   t=t+2;
   }
printf("  the n number sum is %d \n",sum);
printf(" time complexity is %d \n",t);
getch();
}