#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
    if(argc<5){
        printf("Too few arguments!");
        return 1;
    }
    if(argc>5){
        printf("Warning: Too many arguments provided. Ignoring extras.\n");
    }
    double principal = strtod(argv[1],NULL);
    double annualRate = strtod(argv[2],NULL);
    double ctpy = strtod(argv[3],NULL);
    double targetYears = strtod(argv[4],NULL);
    double resultTotal = 0;

    resultTotal = principal*pow((1+(annualRate/100)/ctpy),ctpy*targetYears);
    printf("Total Amount: %lf",resultTotal);
    return 0;
}