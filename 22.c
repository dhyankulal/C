#include<stdio.h>
void main(){
    int num1=3;
    int list1[0];
    if (num1%2==0){
        list1[0]=num1;
        printf("even: %d", list1[0]);
    }else{
        printf("Odd: %d", list1[0]);
    }
}// even or odd