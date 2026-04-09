#include<stdio.h>

int main(){
    int num1 = 0;
    int num2 = 0;
    int i=0;

    printf("Enter starting: ");
    scanf("%d",&num1);
    printf("Enter ending: ");
    scanf("%d",&num2);

    for(int j=num1; j<num2+1; j++){
        num1= j;
        for(i=1;i<11;i++){
            printf("%dx%d=%d\n",num1,i,num1*i);
        }
        printf("\n");
    }

    return 0;
}