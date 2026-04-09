#include<stdio.h>
void main(){
    char name[] = "DhyanKulal";
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