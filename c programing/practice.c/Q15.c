#include<stdio.h>
int main(){
    char ch;
    printf("enter the chatacter=");
    scanf("%c" ,&ch);
   if((ch>='a' && ch<='z') ||( ch>='A' && ch<='Z')){
    printf("this is a character");
   } 
   else if(ch>='0' && ch<='9'){
    printf("this is a number");
   }else{
    printf("this is special character");
   }
    return 0;
}