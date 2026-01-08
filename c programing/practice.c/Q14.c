//absolute value of a number
#include<stdio.h>
int main(){
float num;
printf("entetr the number");
scanf("%f" ,&num);
if(num<0){
   num=-num;
}
 printf("the absolute value is %f", num);
    return 0;
}