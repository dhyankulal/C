#include<stdio.h>
int main(){
    double num1,num2;
    printf("Enter 2 numbers seperated by white space: ");
    scanf("%lf %lf",&num1,&num2);
    if(num2==0){
        printf("cannot divide by zero!");
        return 0;
    }
    printf("%lf",num1/num2);
    return 0;
}