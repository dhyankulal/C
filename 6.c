#include<stdio.h>
int main(){
    char name[20];
    puts("Enter your name: ");
    gets(name);
    puts(&name[0]);
    return 0;
}