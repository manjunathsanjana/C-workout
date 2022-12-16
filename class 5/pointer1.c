#include<stdio.h>

int main(){
int y[4]={6,7,8,9};
int *ptr=y+2;
printf("%d\n",ptr[1]);   /* ptr[0] is value inside the inex 2 of array because pointer pointing to that address then ptr[1]=9 */   


return 0;
}