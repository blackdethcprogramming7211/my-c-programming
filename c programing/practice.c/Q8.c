//simple interst
#include<stdio.h>
int main(){
    int p,t;
    float r;
    printf("enter principle amount=");
    scanf("%d" ,&p);
    printf("enter time=");
    scanf("%d" ,&t);
     printf("enter rate of interest=");
    scanf("%f" ,&r);
    float simple_interest=p*r*t;
    printf("simple imterest=%.3f" ,simple_interest);
    return 0;
}
