#include<stdio.h>
int main(){
int originalnum,reversenum=0,remainder;
printf("enter the original number ");

scanf("%d" ,&originalnum);

while(originalnum != 0){
    remainder=originalnum%10;
    reversenum=reversenum*10+remainder;
    originalnum /=10;
    
}
printf("reverse num=%d \n" ,reversenum);
return 0;
}
