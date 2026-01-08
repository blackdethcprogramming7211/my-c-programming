/*wap to enter three price of 3 items & print their final cost with gst*/
#include<stdio.h>

int main(){
    float arr[3];
    int i;
    float base_bill,final_bill;
    for(i=0;i<3;i++){
        printf("%d product price is: " ,i+1);
        scanf("%f" ,&arr[i]);
    }
      for(i=0;i<3;i++){
       base_bill=arr[i]*0.18; 
       final_bill=arr[i]+base_bill;
       //printf("base bill of %d product=%.2f\n" ,i+1,base_bill);
     printf("final bill of %d product= %.2f\n" ,i+1,final_bill);
    }

    return 0;
}