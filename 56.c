#include<stdio.h>
#include<math.h>
int main(){
    double radius = 0;
    double circum = 0;
    printf("Enter the radius value: ");
    scanf("%lf",&radius);
    circum = 2*M_PI*radius;
    printf("%lf",circum);
    return 0;
}
/*
19-11-2013
15-04-2026*/