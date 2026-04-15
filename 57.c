#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    int add1=0;
    int sub1=0;
    int mul1=0;
    int div1=0;
    int exp1=0;
    if(!(argc>1)){
        printf("No command line arguments provided");
    }
    add1=atoi(argv[1])+atoi(argv[2]);
    sub1=atoi(argv[1])-atoi(argv[2]);
    mul1=atoi(argv[1])*atoi(argv[2]);
    div1=atoi(argv[1])/atoi(argv[2]);
    exp1=pow(atoi(argv[1]),atoi(argv[2]));
    printf("Add: %d\n",add1);
    printf("Sub: %d\n",sub1);
    printf("Mul: %d\n",mul1);
    printf("div: %d\n",div1);
    printf("exp: %d\n",exp1);
    return 0;
}
/*
19-11-2013
15-04-2026*/