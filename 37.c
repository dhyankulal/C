#include<stdio.h>
void main(){
    int num1;
    puts("Enter number: ");
    scanf("%d",&num1);
    for(int i=2; i<num1; i++){
        if(num1%i==0){
            puts("not a prime");
            break;
        }
        else{
            puts("it's a prime number.");
            break;
        }
    }
}