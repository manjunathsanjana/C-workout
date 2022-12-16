#include<stdio.h>

int main(){
int i=0;

if(i==0){
i=((5,(i=3)),i=1); /* in (5,3) 3 will nbe taken and in (3,1) 1 will be taken answer is 1 */
printf("%d",i);
}
else{
printf("equal");
}
}