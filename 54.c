#include<stdio.h>

int main(){
    int m,n,sum=0;
    puts("Enter m and n: ");
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n; i++){
        sum+=i;
    }
    puts(sum);
    return 0;
}