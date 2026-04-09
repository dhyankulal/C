#include<stdio.h>
#include<math.h>
void main(){
    int x1,x2,y1,y2,distance;
    printf("Enter the co-ordinates x1 and y1: ");
    scanf("%d%d",&x1,&y1);
    printf("Enter the co-ordinates x2 and y2: ");
    scanf("%d%d",&x2,&y2);
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("distance is: %d",distance);
}