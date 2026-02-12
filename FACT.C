#include<stdio.h>
#include<conio.h>
void main(){
int i,n,t;
long long int f=1;
clrscr();
printf("enter num to find its factorial \n");
scanf("%d",&n);
for(i=1;i<=n;i++){
t=t+3;
f=f*i;
t=t+2;
}
printf("factorial is %lld",f);
printf("time compi is %d",t);
getch();
}