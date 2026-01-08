 /*record 7 day temp and find highest tmp and lowest temp and avarage temp*/
 #include<stdio.h>
 
 int main(){
    float temp[7],avg,sum=0,max,min;
    printf("enter 7 days temp:\n");
    for(int i=0;i<7;i++){
        printf("day %d= ",i+1);
        scanf("%f" ,&temp[i]);
        sum+=temp[i];
        if(i==0){
            max=min=temp[i];
        }
        if(temp[i]>max){
            max=temp[i];
        }
        if(temp[i]<min){
            min=temp[i];
        } 
    }
    avg=sum/7.0;
    printf("max temp=%.2f\n" ,max);
    printf("min temp=%.2f\n" ,min);
    printf("avg temp=%.2f\n" ,avg);
    return 0;
 }