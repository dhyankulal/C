#include<stdio.h>
void main(){
    char name[] = "Dhyan";
    char space[] = " ";
    for(int j=sizeof(name)-1; j>0; j--){
        for(int i=0; i<sizeof(name)-j; i++){
            printf("%s",space);
        }
        for(int i=0; i<j; i++){
        printf("%c",name[i]);
    }
    printf("\n");
    }
}