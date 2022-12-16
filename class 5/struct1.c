#include<stdio.h>

struct marks{

int p:3;
int c:3;    /* it means only last 3 bits will be taken into consideration */
int m:2;    /* it means only last 2 bits will be taken into consideration */
};

int main(){
struct marks s ={2,-6,5};
printf("%d %d %d",s.p,s.c,s.m);

return 0;
}