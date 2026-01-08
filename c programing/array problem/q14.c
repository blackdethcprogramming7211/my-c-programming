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
    //  int q;
    // printf("\n\nEnter a price to search: ");
    // scanf("%d", &q);

    // Binary search
    // int low = 0, high = n - 1, found = 0;
    // while (low <= high) {
    //     int mid = (low + high) / 2;
    //     if (w[mid] == q) {
    //         found ++;
    //         break;
    //     } else if (w[mid] < q) {
    //         low = mid + 1;
    //     } else {
    //         high = mid - 1;
    //     }
    // }

    // if (found)
    //     printf("Product is available\n");
    // else
    //     printf("Product is not available\n"); 
    // return 0;
     int q;
    printf("enter weight of chocolate bar:");
    scanf("%d" ,&q);
    int count =0;
    for(int i=0;i<n;i++){
   if(w[i]==q){
       count++;
   }
       }
    if(count){
        printf("%d ticket exist %d" ,q,count);
    }
    else
     printf("%d ticket not exist" ,q);
    return 0;
}
