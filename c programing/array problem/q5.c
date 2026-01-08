#include<stdio.h>

int main(){
int arr[5];
int count=0;
 printf("Enter 5 number:");
for(int i=0;i<5;i++){
    scanf("%d" ,&arr[i]);
    if(arr[i]%2!=0){
        count++;
    }
}
printf("total odd numjber is=%d\n" ,count);
printf("total even number is=%d" ,5-count);

    return 0;
}