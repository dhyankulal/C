#include<stdio.h>

/*    Diamond    */
void main(){
    char name[] = "Dhyangugjhghgkjhgjkhjkhjkghjkghjg";
    char space[] = " ";
    for(int j=0; j<sizeof(name)/2; j++){
        for(int i=0; i<sizeof(name)/2-j;i++){
            printf("%s",space);
        }
        for(int i=0; i<2*j+1; i++){
            printf("%c",name[i]);
        }
        printf("\n");
    }


    for(int j=0; j<sizeof(name)/2+1; j++){
        for(int i=0; i<j+1; i++){
            printf("%s", space);
        }
        for(int i=0; i<2*(sizeof(name)/2-j)+1; i++){
            printf("%c",name[i]);
        }
        printf("\n");
    }
    
    
}