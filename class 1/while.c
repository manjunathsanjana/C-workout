#include<stdio.h>

int main(){
unsigned int i=65535;;

while(i++ !=0)             /* answer is INFINITE OUTPUT */
 printf("%d",++i);
printf("\n");
return 0;
}