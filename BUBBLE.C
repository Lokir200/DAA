#include<stdio.h>
#include<conio.h>
#include<time.h>
void main(){
int n,i,j,temp,t;
int ar[10];
clrscr();
n=10;
    srand(time(NULL));

    for ( i = 0; i < n; i++) {
	ar[i] = rand() % 100;
    }
    for (i = 0; i < n; i++) {
	printf("%d ", ar[i]);
    }
n=10;
t=0;
printf("array after sort \n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
t=t+3;
if(ar[i]>ar[j]){
t=t+3;
temp=ar[j];
ar[j]=ar[j+1];
ar[j+1]=temp;
t=t+3;

}}
}
for(i=0;i<n;i++){
printf("%d \t",ar[i]);
}
printf("time complexity is %d",t);
getch();
}



