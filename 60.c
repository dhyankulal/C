#include<stdio.h>
#include<windows.h>

int main(){
    char *string1 = "FunwithProgramming";
    while(*string1!='\0'){
        printf("%c",*string1);
        Sleep(100);
        *string1++;
    }
    return 0;
}