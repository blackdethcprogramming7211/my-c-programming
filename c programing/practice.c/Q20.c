//print -n to n with increase 0.5

#include<stdio.h>
int main(){
int n;
printf("enter n :");
scanf("%d" ,&n);
float i;
for(i=-n;i<=n;i=i+0.50){
    printf("%0.2f " ,i);
}

    return 0;

}
