#include<stdio.h>
void main(){
    char name[] = "Dhyan";
    for(int j=1;j<sizeof(name); j++){
        for(int i=0; i<j; i++){
            printf("%c",name[i]);
    }    
    printf("\n");
    }
}