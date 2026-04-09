#include<stdio.h>
void main(){
    char name[] = "DhyanKulaljhf";
    char space = ' ';
    int ten = sizeof(name)+1;
    for(int j=1; j<(sizeof(name)/2); j++){
        for(int i=0; i<j; i++){
            printf("%c",space);
        }
        for(int i=0; i<(ten)-(2*j+1); i++){
            printf("%c",name[i]);
        }   
        printf("\n");
    }
     
}