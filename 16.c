#include<stdio.h>
void main(){
    char name[] = "Dhyanygggyggygy";
    char space[] = " ";
    int len1 = sizeof(name)/2;
    for(int j=1; j<sizeof(name);j++){
        if(j%2!=0){
            for(int i=sizeof(name)-j; i>0; i-=2){
            printf("%c",space);
        }
            for(int i=0; i<j; i++){
                printf("%c",name[i]);
            }
        printf("\n");

        }
    }
}