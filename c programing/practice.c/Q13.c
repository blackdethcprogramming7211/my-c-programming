// alphabet or not
#include<stdio.h>
int main(){
char ch;
printf("entetr the character");
scanf("%c" ,&ch);
if((ch>='a' && ch<='z') ||( ch>='A' && ch<='Z')){
    printf("the character is albhabet");
}
else{
    printf("the character is special");
}
    return 0;
}