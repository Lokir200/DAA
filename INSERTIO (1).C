#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,a[100],j,key,t=0;
  clrscr();
  printf("Enter the no of elements");
  scanf("%d",&n);
  printf("Enter the elements");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=1;i<n;i++)
  {
  t=t+3;
  key=a[i];
  t=t+1;
  j=i-1;
  t=t+2;
  while(j>=0 && key<a[j])
  {
  t=t+3;
  a[j+1]=a[j];
  t=t+1;
  j=j-1;
  t=t+1;
  }
  a[j+1]=key;
  t=t+1;
  }
  printf("sorted array");
  for(i=0;i<n;i++)
  {
  printf("%d ",a[i]);
  }
  printf("time complexity %d",t);
  getch();
  }