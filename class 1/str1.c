#include<stdio.h>

int main(){
 
char a[]="Hello world";

char* p=a;

printf("%d %d %d %d ",sizeof(a),sizeof(p),strlen(a),strlen(p));      /* answer is 12 2 11 11 */

retrun 0;

}