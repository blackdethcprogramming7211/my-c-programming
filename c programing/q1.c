/*find smaller amiong the given array*/
#include<stdio.h>

int main(){
    int i,n,small_pos,pos1,arr[20],big_pos,pos2;
    printf("Enter the number o element: ");
    scanf("%d" ,&n);
    printf("\nenter the %d numbers:" ,n);
    for(i=0;i<n;i++){
       scanf("%d" ,&arr[i]);
    }
    small_pos=arr[0],pos1=0;
     for(i=0;i<n;i++){
       if(arr[i]<small_pos){
        small_pos=arr[i];
        pos1=i;
      }
    }
    big_pos=arr[0];
    pos2=0;
    for(i=0;i<n;i++){
      if(arr[i]>big_pos){
        big_pos=arr[i];
        pos2=i;
      }
    }
    printf("\nsmaller number is=%d" ,small_pos);
    printf("\nposition of the smaller element is:%d" ,pos1);
     printf("\nGreater number is=%d" ,big_pos);
    printf("\nposition of the greater element is:%d" ,pos2);

    return 0;
}
