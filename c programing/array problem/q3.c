
#include<stdio.h>

int main(){
    int adhar[10];
    int *ptr=&adhar[0];
    int i;
    for(i=0;i<10;i++){
    printf("%d index value= ",i);
    scanf("%d" ,(ptr+i) );//use &adhar[i]
    }

    return 0;
}