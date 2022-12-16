#include<stdio.h>

int main(){
int a=10,b=2,c;
a=!(c=c==c)&&++b;
c+=(a+b--);
printf("%d %d %d",b,c,a);   /* the answer is 1 3 0 */ 

return 0;
}
