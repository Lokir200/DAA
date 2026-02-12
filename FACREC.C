#include<stdio.h>
#include<conio.h>
long fact(int n){
long f;
if(n==0)
return 1;
else{
f=n*fact(n-1);
return f;
}
}

void main(){
int n;
clrscr();
printf("enter number");
scanf("%d",&n);
printf("the fatorial is %ld",fact(n));
getch();
}
