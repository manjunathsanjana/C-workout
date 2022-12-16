#include<stdio.h>

void main(){
char c='a';
switch(c){
case 97: printf("97");
         break;
case 'a': printf("98");           /*answer is error  beacause the compiler will not decide between ascii value of a and 97 to give right answer */
         break;
default: printf("default");

}
}