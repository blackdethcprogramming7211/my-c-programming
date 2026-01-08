/*keep airport ticket details and enter a ticket number check it exist or not*/
#include<stdio.h>

int main(){
    int n;
    printf("enter ticket exist: ");
    scanf("%d" ,&n);
    int arr[n];
    printf("%d tickets number:\n",n);
    for(int i=0;i<n;i++){
printf("enter %d ticket detalis: " ,i+1);
scanf("%d" ,&arr[i]);
    }
    int q;
    printf("enter a ticket number:");
    scanf("%d" ,&q);
    int count =0;
    for(int i=0;i<n;i++){
   if(arr[i]==q)
   count=1;
    }
    if(count){
        printf("%d ticket exist" ,q);
    }
    else
     printf("%d ticket not exist" ,q);
    return 0;
}