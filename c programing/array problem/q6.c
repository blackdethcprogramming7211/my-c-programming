/*find odd or even number*/
 #include<stdio.h>
 int countodd(int arr[],int n);
 int main(){
    int n;
     printf("enter array size: ");
    scanf("%d" ,&n);
    int arr[n];
    printf("enter %d array: ",n);
    for(int j=0;j<n;j++){
      scanf("%d" ,&arr[j]);
    }
   printf("\nodd number=%d\n" , countodd(arr, n));
   printf("\neven number=%d\n" , n-countodd(arr, n));
    return 0;
 }
  int countodd(int arr[],int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    return count;
  }