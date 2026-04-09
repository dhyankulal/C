#include<stdio.h>

void main(){
    int a,b;
    a=10;
    b=20;
    printf("sum: %d",a+b);
    a+=2;
    printf("sum: %d",a+b);

    printf("%d",a==b || a%2==0);
}