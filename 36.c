#include<stdio.h>
void main(){
    int num1=0,num2=1,num3=0,num4;
    puts("Enter number: ");
    scanf("%d",&num4);
    printf("%d\n",num1);
    printf("%d\n",num2);
    for(int i=0; i<num4; i++){
        num3=num1+num2;
        printf("%d\n",num3);
        num1=num2;
        num2=num3;
    }
    
}