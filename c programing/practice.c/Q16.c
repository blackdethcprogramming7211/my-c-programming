//make a simple simple calculator
#include<stdio.h>
int main(){
char ch;
printf("enter a character:");
scanf("%c" ,&ch);
if((ch>='a' && ch>='z') || (ch>='A' && ch<='Z')){
    if((ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u') || (ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U')){
        printf("%c the character is vowel" ,ch);
    }else{
        printf("%c the character is consonent" ,ch);
}
}else{
     printf("%c the character is special character" ,ch);
}
    return 0;

}