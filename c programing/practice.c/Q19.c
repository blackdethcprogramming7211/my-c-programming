//Take 3 lengths from the user and check if they form a triangle.
#include<stdio.h>
int main(){
  int a,b,c;
  printf("Enter a=");
  scanf("%d" ,&a);
  printf("Enter b=");
  scanf("%d" ,&b);
  printf("Enter c=");
  scanf("%d" ,&c);
  if((a+b>c)&&(b+c>a)&&(c+a>b)){
    printf("they made trangel\n");
  }else{
    printf("they made not trangel\n");
  }
if(a==c && b==c && c==a){
    printf("they trangel is equilateral\n");
  }else if(a==b && a==c){
    printf("they trangel is isoscsalen\n");
  }else{
     printf("they trangel is scsalen\n");
  }
    return 0;
}