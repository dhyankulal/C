#include<stdio.h>
void main(){
    char name[] = "...";
    char space[] = " ";
    int count = 6;
    int count2 =2;
    int count3 =6;

    /*   D    */
    for(int i=0; i<7; i++){
        printf("%c",name[0]);
        }
            printf("\n.");
        for(int j=6; j<9; j++){
            for(int i=0; i<j; i++){
                printf("%s",space);
            }
            printf(".\n.");
        }
        for(int j=9; j>5; j--){
            for(int i=0; i<j; i++){
                printf("%s",space);
            }
            printf(".\n.");
        }
        for(int i=0; i<5; i++){
            printf("%c",name[0]);
        }
        printf("\n");

    printf("\n");
    
        /*   H     */
        for(int j=0; j<2; j++){
            printf(".");
            for(int i=0; i<10; i++){
                printf(" ");
            }
            printf(".\n");
        }
        for(int i=0; i<12; i++){
            printf(".");
        }
        printf("\n");
        for(int j=0; j<2; j++){
            printf(".");
            for(int i=0; i<10; i++){
                printf(" ");
            }
            printf(".\n");
        }
    printf("\n");

        /*    Y     */
        for(int j=1; j<4; j++){
            for(int i=0; i<j; i++){
                printf(" ");
            }
            printf(".");
            for(int i=0; i<count; i++){
                printf(" ");
            }
            printf(".\n");
            count-=2;
        }
        for(int j=4; j>1; j--){
            for(int i=0; i<j; i++){
                printf(" ");
            }
            printf(".\n");
        }
    printf("\n");

        /*   A     */
        for(int i=0; i<5; i++){
            printf(" ");
        }
        printf(".\n");
        for(int j=3; j>1; j--){
            for(int i=0; i<j; i++){
                printf(" ");
            }
                printf(".");
            for(int i=0; i<count2; i++){
                printf(" ");
            }
            printf(".\n");
            count2+=2;
        }
        for(int i=0; i<5; i++){
            printf(" .");
        }
        printf("\n");
        for(int i=0; i<2; i++){
            printf(".");
            for(int i=0; i<9; i++){
                printf(" ");
            }
            printf(".\n");
        }
    printf("\n");

          /*    N    */
          printf(".");
    for(int j=1; j<5; j++){
            for(int i=0; i<j; i++){
                printf(" ");
            }
            printf(".");
            for(int i=0; i<count3; i++){
                printf(" ");
            }
            printf(".\n.");
            count3-=2;
        }
    }