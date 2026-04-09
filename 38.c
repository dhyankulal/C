#include<stdio.h>
void main(){
    char num1[]="84567454744765442";
    int num2 = sizeof(num1);
    for(int i=2; i<=sizeof(num1); i++){
        printf("%c",num1[num2-i]);
    }
}