//Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
//For first 50 units Rs. 5/unit
//For next 100 units Rs. 10/unit
//For next 100 units Rs. 15/unit
//For unit above 250 Rs. 20/unit
//An additional charge of 20% is added to the bill

#include<stdio.h>
#include<math.h>
int main(){
int units;
float base_bill,total_bill,surcharge;
printf("enter the unit consumed:");
scanf("%d" ,&units);
if(units<=50){
    base_bill=units*5;
}
else if(units<=150){
    base_bill=(50*5.0)+((units-50)*10.0);
}
else if (units<=250){
    base_bill=(50*5.0)+(100*10.0)+((units-150)*15.0);
}
else {
    base_bill=(50*5.0)+(100*10.0)+(100*15.0)+((units-250)*20.0);
}
surcharge=base_bill*0.20;
total_bill=base_bill+surcharge;
printf("Total electrttic bill=%.2f" ,total_bill);





    return 0;

}