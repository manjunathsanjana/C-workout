#include<stdio.h>

int main(){
int a[5]={1,2,3,4,5};
int i;
for(i=0;i<5;i++){
if((char)a[i]=='5'){        /* it will take the ascii value of 1,2,3,4,5 and comared with the '5'  answer is fail 5 times */
printf("%d\n",a[i]);

}

else{
printf("FAIL\n");
}
}
return 0;
}