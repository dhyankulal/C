#include<stdio.h>
void main(){
    char name[] = "Dhyan";
    char space[] = " ";
    for(int j=1;j<sizeof(name); j++){
        for(int i=sizeof(name)-j; i>0; i--){
            printf("%s",space);
        }
        for(int i=0; i<j; i++){
            printf("%c",name[i]);
    }    
    printf("\n");
    }
}