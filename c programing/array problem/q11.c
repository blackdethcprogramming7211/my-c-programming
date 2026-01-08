/*tower hanoi problem*/
#include<stdio.h>
void towerhanoi(int n,char form,char to,char aux);
int main(){
 int n;
 printf("enter disk number: ") ;
 scanf("%d" ,&n);
 towerhanoi(n,'A','C','B') ; 
    return 0;
}
void towerhanoi(int n,char form,char to,char aux){
    if(n==1){
        printf("disk 1 moves from %c to%c\n" ,form,to);
        return;
    }
towerhanoi(n-1,form,aux,to);
printf("move disk %d from %c to %c\n" ,n,form,to);
towerhanoi(n-1,aux,to,form);
}