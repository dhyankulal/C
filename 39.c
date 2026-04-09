#include<stdio.h>
void main(){
    char num1[20];
    puts("Enter the numbers: ");
    scanf("%s",&num1[0]);
    int num2 = sizeof(num1);
    for(int i=2; i<=sizeof(num1); i++){
        printf("%c",num1[num2-i]);
    }
}