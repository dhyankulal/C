#include<stdio.h>
void main(){
    int num1,sum1=1;
    puts("Enter the number: ");
    scanf("%d",&num1);
    for(int i=1; i<num1+1; i++){
        sum1*=i;
    }
    printf("Sum is: %d",sum1);
}