#include<stdio.h>
int main(){
    int year=2028;
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                printf("It is a leap year.");
            }else{
                printf("Not a leap year.");
            }
        }else{
            printf("It is a leap year.");
        }
    }else{
        printf("Not a leap year.");
    }
    return 0;
}