//Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
//For first 50 units Rs. 5/unit
//For next 100 units Rs. 10/unit
//For next 100 units Rs. 15/unit
//For unit above 250 Rs. 20/unit
//An additional charge of 20% is added to the bill
#include<stdio.h>
#include<math.h>
int main(){
    int unit;
float base_bill,total_bill,surcharge;
printf("Enter electric consumed:");
scanf("%d" ,&unit);
if(unit<=50){
    base_bill=(unit*5);
}
else if(unit<=150){
    base_bill=(50*5)+((unit-50)*10) ;
}
else if(unit<=250){
    base_bill=(50*5)+(100*10)+((unit-100)*15) ;
}
else if(unit>=500){
    base_bill=(50*5)+(100*10)+(100*15)+((unit-250)*20) ;
}
surcharge=(base_bill*.2);
total_bill=base_bill+surcharge;
printf("total bill=%.2f" ,total_bill);

    return 0;
}