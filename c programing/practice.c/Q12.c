// check possitive,negetive,zero
#include<stdio.h>
int main(){
float num;
printf("entetr the number");
scanf("%f" ,&num);
if(num>0){
    printf("the number is possitive");
}
else if(num<0){
    printf("the number is negetive");
}else if(num==0){
printf("the number is zero");
}
    return 0;
}