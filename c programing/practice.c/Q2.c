//wacp to user input int a and float b then find the sum
#include<stdio.h>
int main(){
int a;
float b;
float sum;
printf("enter the value of a=");
scanf("%d" ,&a);
printf("enter the value of b=");
scanf("%f" ,&b);
sum=a+b;
printf("sum is:%.2f" ,sum);
float product=a*b;
printf("\nthe product of two number =%.2f" ,product);
return 0;
}