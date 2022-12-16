#include<stdio.h>

int main(){
static int i;      /* initially static variables are initialzed with 0 not like normal variables which are initialized with garbage value */
int j;
for(j=0;j<10;j++){
i+=2;
i-=j;
}
printf("%d",i);
}