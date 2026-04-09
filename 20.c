#include<stdio.h>
void main(){
    char name[] = "...";
    char space[] = " ";
    int count = 6;
    printf(".");
    for(int j=1; j<5; j++){
            for(int i=0; i<j; i++){
                printf(" ");
            }
            printf(".");
            for(int i=0; i<count; i++){
                printf(" ");
            }
            printf(".\n.");
            count-=2;
        }
    
}