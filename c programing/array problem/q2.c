#include<stdio.h>

int main(){
    int age=22;
    int _age=23;
    int *ptr=&age;
    int *_ptr=&_age;
    printf("%p %p difference=%d\n" ,ptr,_ptr,ptr-_ptr);
    _ptr=&age;
      printf("comperison=%d\n" ,ptr==_ptr);
    return 0;
}