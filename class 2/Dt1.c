#include<stdio.h>

int main(){

float f=0.1;
if(f==0.1)                  /* f is taking highest datatype that is long double not float */ 
    printf("YES\n");
else
    printf("NO\n");                  /* answer is NO */
return 0;
}