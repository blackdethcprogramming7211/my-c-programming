//two number check greater
#include<stdio.h>
int main(){
float num1,num2;
printf("enter num1=");
scanf("%f" ,&num1);
printf("enter num2=");
scanf("%f" ,&num2);
if(num1>num2){
    printf("%.2f is the bigger number than %.2f" ,num1,num2);
}
else{
    printf("%.2f is the bigger number than %.2f" ,num2,num1);
}
    return 0;
}