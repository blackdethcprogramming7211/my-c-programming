// check 3 numbervsmallest and greter
#include<stdio.h>
int main(){
float num1,num2,num3;
printf("enter num1=");
scanf("%f" ,&num1);
printf("enter num2=");
scanf("%f" ,&num2);
printf("enter num3=");
scanf("%f" ,&num3);
if(num1>num2 && num1>num3){
    printf("%.2f is the bigger number\n" ,num1);
}
else if(num2>num1 && num2>num3){
    printf("%.2f is the bigger number\n" ,num2);

}
else if(num3>num1 && num3>num2){
    printf("%.2f is the bigger number\n" ,num3);
}
if(num1<num2 && num1<num3){
    printf("%.2f is the smaller number\n" ,num1);
}
else if(num2<num1 && num2<num3){
    printf("%.2f is the smaller number\n" ,num2);

}
else if(num3<num1 && num3<num2){
    printf("%.2f is the smaller number\n" ,num3);
}
    return 0;
}