//avarage number of 4 subject
#include<stdio.h>
int main(){
    int phy,che,math,bio;
    printf("enter number of physics=");
    scanf("%d" ,&phy);
    printf("enter number of chemistry=");
    scanf("%d" ,&che);
    printf("enter the number of math=");
    scanf("%d" ,&math);
    printf("enter the number of biology=");
    scanf("%d" ,&bio);
    float avg=(phy+che+math+bio)/4;
    printf("avarage=%.2f" ,avg);
    return 0;
}