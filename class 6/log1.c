#include<stdio.h>

int main(){
int i=0,j=0;
if(i&&(j=i+10))   /* already i is 0(false) therefore the (j=i+10) is not calculated if i=1 then we need to calculated  the answer is 0 */
;
printf("%d",j);
return 0;
}