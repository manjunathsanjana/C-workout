#include<stdio.h>

int main(){                               
int a=b=c=10;                    /*It is a wrong method to declare the variable The answer is compile time error  */
a=b=c=50;
printf("/n %d %d %d",a,b,c);
return 0;

}