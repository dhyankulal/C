#include<stdio.h>

int main(){
    int num1=0;
    int num2=0;
    int num3=0;
    int num4=0;
    int x=0;

    num1=1;
    num2=5;
    num3=1;
    num4=10;
    x=num3;

    for(int i=0; i<11; i++){
        printf("%dx%d=%d\n",num1+0,x,num1*x);
        x++;
    }
    
    return 0;
}