#include<stdio.h>
int main(){
int originalnum,reversenum=0,remainder,num1;
printf("enter the original number ");

scanf("%d" ,&originalnum);
num1=originalnum;
while(originalnum != 0){
    remainder=originalnum%10;
    reversenum=reversenum*10+remainder;
    originalnum /=10;
    
}
printf("%d is reversed.\n" ,reversenum);

if (num1 == reversenum)
       printf("%d is a palindrome.\n",num1);
    else
       printf("%d is not a palindrome." ,num1);

return 0;
}
