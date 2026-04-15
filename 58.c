#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int add1=0;
    int sub1=0;
    int mul1=0;
    int div1=0;
    int exp1=0;

    int num1=0;
    int num2=0;

    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    
    add1=num1+num2;
    sub1=num1-num2;
    mul1=num1*num2;
    div1=num1/num2;
    exp1=pow(num1,num2);
    printf("Add: %d\n",add1);
    printf("Sub: %d\n",sub1);
    printf("Mul: %d\n",mul1);
    printf("div: %d\n",div1);
    printf("exp: %d\n",exp1);
    return 0;
}
/*
19-11-2013
15-04-2026*/