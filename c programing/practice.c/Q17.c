// wacp to fid out vowel,alphabet,special character
#include<stdio.h>
#include<math.h>
int main(){
   
double num1,num2;
     char operator;
    printf("enter the chatacter=");
    scanf("%c" ,&operator);
    printf("enter the number=");
    scanf("%lf %lf" ,&num1,&num2);
    
     
    if(operator=='+'){
        printf("%.2lf+%.2lf=%.2lf" ,num1,num2,num1+num2);
    } else if(operator=='-'){
        printf("%.2lf-%.2lf=%.2lf" ,num1,num2,num1-num2);
    }
    else if(operator=='*'){
        printf("%.2lf*%.2lf=%.2lf" ,num1,num2,num1*num2);
    }
     else if(operator=='/'){
        printf("%.2lf/%.2lf=%.2lf" ,num1,num2,num1/num2);
    }

    return 0;
}