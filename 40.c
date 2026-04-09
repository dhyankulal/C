#include<stdio.h>
#include<string.h>
void main(){
    int num1=0;
    char name[]="racecare";
    int len = strlen(name);
    for(int i=0; i<len/2; i++){
        if(name[i]==name[len-(i+1)]){
            num1=1;
    }
    }
    if(num1==0){
        puts("Not a palindrome");
    }
    else{
        puts("It is a palindrome");
    }
}