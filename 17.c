#include<stdio.h>
void main(){
    char name[] = "Dhyandsjhgjhsxdjgsjgj";
    char space[] = " ";
    for(int j=0; j<sizeof(name)/2; j++){
        for(int i=0; i<sizeof(name)-j;i++){
            printf("%s",space);
        }
        for(int i=0; i<2*j+1; i++){
            printf("%c",name[i]);
        }
        printf("\n");
    }
}