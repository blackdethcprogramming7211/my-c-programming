/*sorting*/
#include<stdio.h>

int main(){
    int n,t;
    printf("enter no of chocolate bar:");
    scanf("%d" ,&n);
    int w[n];
    for(int i=0;i<n;i++){
        scanf("%d" ,&w[i]);
    }
    for(int i=0;i<n-1;i++){
           for(int j=0;j<n-i-1;j++)
     if(w[j]>w[j+1]){
     t=w[j];
     w[j]=w[j+1];
     w[j+1]=t;
     }
    
    }
     
   for(int i=0;i<n;i++){
        printf("%d\t" ,w[i]);
     } 
    
   
    return 0;
}