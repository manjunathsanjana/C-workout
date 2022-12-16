#include<stdio.h>

int main(){

int a,b;
a=1,3,15;
b=(2,4,6);   /* if braces last value will be taken if not as in a 1st value will be taken */ 
printf("%d",a+b);  /* 7 is the answer */ 
return 0;

}