//Take a positive integer (say x) from the user. Check which numbers from 1 to x are divisible by 4. Print in following way
#include<stdio.h>
int main(){
int num;
printf("enter the number=");
scanf("%d" ,&num);
for(int i=1;i<=num;i++){
if(i%4==0){
    printf("%d is devisible by 4\n" ,i);
}else{
 
    printf("%d is not devisible by 4\n" ,i);
}
}
    return 0;
}