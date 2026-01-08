#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int n;
    printf("enter number: ");
    scanf("%d" ,&n);
    int num=abs(n);
   while(num>=2){
    num=num-2;
   }
 if(num==0){
    printf("the number is even");
 }
 else{
    printf("the number is odd");
 }
    return 0;
}