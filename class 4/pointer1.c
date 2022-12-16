#define N 5

#include<stdio.h>

int main(){

int a[N],*p,i;
float b[N],*q;
for(i=0;i<N;i++){
a[i]=1;
b[i]=0.3;
}

p=&a[3];
q=&b[3];
*p=5;
*(p-1)=9;   
*q=0.5;
*(q-1)=0.9;
*(q+1)=0.6;

for(i=0;i<N;i++){
printf("\n%d\t%f",a[i],b[i]);
}
return 0;
}