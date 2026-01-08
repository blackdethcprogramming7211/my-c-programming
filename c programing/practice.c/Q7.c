//grade calculation
#include<stdio.h>
int main(){
int phy,che,math,bio;
printf("put phy number:");
scanf("%d" ,&phy);
printf("put che num:");
scanf("%d" ,&che);
printf("put math num:");
scanf("%d" ,&math);
printf("put number bio:");
scanf("%d" ,&bio);
float avg=(phy+che+math+bio)/4;
printf("avarage=%.3f" ,avg);
if(avg>=90){
    printf("grade=E");
}
else if(avg>=80){
    printf("grade=A+");

}
else if(avg>=70){
    printf("grade=A");
}
else if(avg>=60){
   printf("grade=B+");
}
else if(avg>=50){
    printf("grade=C");
}else{
    printf("grade=D");
}
    return 0;
}