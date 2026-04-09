#include<stdio.h>
#include<string.h>
void main(){
    char name[20];
    int a=0,b=0;
    scanf("%s",&name);
    for(int i=0; i<strlen(name); i++){
        if(name[i]=='a'|| name[i]=='e'|| name[i]=='i'|| name[i]=='o'|| name[i]=='u'){
            puts("yes");
            a=a+1;
    }
    else{
        b+=1;
    }
    }
    printf("vowels are:  %d\n",a);
    printf("constants are:  %d",b);
}