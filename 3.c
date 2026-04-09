#include<stdio.h>

void main(){
    int age;
    char section;

    printf("Enter your section: ");
    scanf("%c", &section);
    
    printf("Enter age: ");
    scanf("%d", &age);
    
    printf("My age is %d. my section is %c.",age,section);
}