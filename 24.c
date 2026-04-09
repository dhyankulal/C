#include<stdio.h>
void main(){
    char name = 'O';
    char space = ' ';
    for (int j=10; j>0; j--){
        for(int i=0; i<j; i++){
        printf(" ");
    }
    for(int i=0; i<22-(2*j+1); i++){
        printf("%c",name);
    }
    printf("\n");
    }
    //j
    for (int j=10; j>0; j--){
        for(int i=0; i<11-j; i++){
        printf(" ");
    }
    for(int i=0; i<(2*j-1); i++){
        printf("%c",name);
    }
    printf("\n");
    }
}