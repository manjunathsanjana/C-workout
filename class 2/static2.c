#include<stdio.h>

static int i;
void main(){
int i;                            /* if you are declare(not initialize) the local variable same as globle variable then global variable is taken as priority */ 
printf("i=%d",i);
}