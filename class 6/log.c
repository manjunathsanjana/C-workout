#include<stdio.h>

int main(){
int x=1,y=0,z=5;
int a=x&&y||z++ ;     /* && has higher priority than || so the answer is 6 */
printf("%d",z);

return 0;
}
