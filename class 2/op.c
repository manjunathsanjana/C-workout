#include<stdio.h>

void main(){
int c=2,d=5,e=10,a;
a=c>1?d>1||e>1?100:200:300;           /* answer is 100 */
printf("a=%d",a);

}