#include<stdio.h>
int main(){
    int  secs =0, mins =0, hrs =0;
    printf("Enter number of seconds: ")
    scanf("%d",&secs);
    hrs = secs/3600;
    mins = secs-(hrs*3600);

    mins = secs/60;
    secs = secs-(mins*60);
    printf("The time in seconds and minutes: %d %d",secs,mins);
    return 0;
}