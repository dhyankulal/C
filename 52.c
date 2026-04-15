#include<stdio.h>
void main(){
    int name;
    int num1,num2;
    puts("Enter 2 numbers: ");
    scanf("%d%d",&num1,&num2);
    puts("Enter the inputs(1-4)");
    scanf("%d",&name);
    switch(name){
        case 1:
        printf("%d",num1+num2);
        case 2:
        printf("%d",num1-num2);
        case 3:
        printf("%d",num1*num2);
        case 4:
        printf("%d",num1/num2);
        default:
        puts("Invalid");
    }
} 