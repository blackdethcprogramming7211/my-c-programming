/*reverse array*/
#include<stdio.h>
void reverse(int arr[],int n);
void print(int arr[],int n);
int main(){
    int k;
    printf("enter array number:");
    scanf("%d" ,&k); 
    int arr[k];
    for(int i=0;i<k;i++){
        scanf("%d" ,&arr[i]);
    }
 reverse(arr, k);
  print(arr, k);
    return 0;
}
void print(int arr[],int n){
  for(int i=0;i<n;i++){
    printf("%d\t"  ,arr[i]);
    }  
    printf("\n");
}
void reverse(int arr[],int n){
    int first, second;
    for(int i=0;i<n/2;i++){
      first=arr[i];
      second=arr[n-i-1];
      arr[i]=second;
      arr[n-i-1]=first;
    }
}