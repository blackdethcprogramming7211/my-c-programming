/*swap number*/
#include<stdio.h>
void swapbyvalue(int x,int y);
void swapbyreference(int *x,int *y);
int main(){
    int a,b;
    printf("entr two number:");
    scanf("%d %d" ,&a,&b);
    swapbyvalue(a,b);
    printf("%d %d\n" ,a,b);
    swapbyreference(&a,&b);
    printf("%d %d\n" ,a,b);
    return 0;
}
void swapbyvalue(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void swapbyreference(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}