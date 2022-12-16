#include<stdio.h>

int main(){
int x=1,y=0;
int l=(y++,x++)?y:x;
printf("%d",l); /* 1 is the answer */

return 0;
}