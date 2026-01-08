/*gcd calculation*/
#include<stdio.h>
int gcd(int a ,int b){
    if(b==0)
    return a;
    else
    return gcd(b, a % b);
}
int main(){
    int x,y;
    printf("enter two possitive integer: ");
    scanf("%d %d" ,&x,&y);
    if(x<=0||y<=0)
    printf("invalid operation");
   else{
     int result=gcd(x,y);
    printf("gcd of %d and %d is=%d" ,x,y,result);
    }
   return 0;
}