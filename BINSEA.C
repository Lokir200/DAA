#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int a[10],i,k,flag=0,l,h,m,n=5,t=0;
clrscr();
randomize();
printf(" the array elements are");
for(i=0;i<n;i++)
{
  a[i]=rand()%100;
  printf("%d\n",a[i]);
}
printf("enter the element to search");
scanf("%d",&k);
l=0;
t=t+1;
h=n-1;
t=t+1;
while(l<=h)
{
t=t+2;
m=(l+h)/2;
t=t+3;
if(a[m]==k)
{
t=t+2;
flag=1;
t=t+1;
break;
}
else if(a[m]<k)
{
l=m+1;
t=t+2;
}
else
{
h=m-1;
t=t+2;
}
}
if(flag==0)
{
t=t+2;
printf("%d is not found\n",k);
}
else
{
printf("%d is found\n",k);
}
printf("the total time is %d",t);
getch();
}