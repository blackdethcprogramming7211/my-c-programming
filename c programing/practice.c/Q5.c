//largest among 3 number
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter num1=");
    scanf("%d" ,&num1);
    printf("enter num2=");
    scanf("%d" ,&num2);
    printf("enter num3=");
    scanf("%d" ,&num3);
    if(num1>num2 && num1>num3){
        printf("%d is the bigest number" ,num1);
    }
    else if(num2>num1 && num2>num3){
        printf("%d is the biggest number" ,num2);
    }else{
        printf("%d is the biggest number" ,num3);
    }
    return 0;
}