#include<stdio.h>
void main(){
    float temp;
    printf("Enter the temparature: ");
    scanf("f",&temp);
    if(temp<20){
        printf("wear the swetter");
    }else if(temp>30){
        printf("Drink water");
    }else{
        printf("Enjoy!");
    }
}