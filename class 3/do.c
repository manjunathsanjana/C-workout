#include<stdio.h>

int main(){
int x=10;
do{
x++;
}while(x++>12);      /* answer is 12 beacause ++ is given priority than > */  
printf("%d",x);
return 0;

}


