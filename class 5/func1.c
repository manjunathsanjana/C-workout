#include<stdio.h>

void func(){
int x=0;
static int y=0;
x++;
y++;
printf("%d-%d",x,y);


}


int main(){               /* the answer will be 1-1 and 1-2 */
func();
func();

return 0;
}