#include<stdio.h>

itn extern x;  /* extern variable can be defined as global therefore x must be initialized outside the main program */
int main(){ 
printf("%d",x);  /* answer is 23 */
x=2;
return 0;
}

int x=23;