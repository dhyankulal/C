#include<stdio.h>
int main(){
    int monthnum=0;
    char months[][] = {"jan","Feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"};
    printf("Enter a number between 1 and 12")
    scanf("%d",&monthnum);
    printf("%s",months[monthno-1]);
    return 0;
}