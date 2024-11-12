#include<stdio.h>
int main(){
    int a=0,b=0,c=0,d=0;
    printf("give value of a,b,c:");
    scanf("%d %d %d", &a, &b, &c);
    if((b-c)!=0){
        printf("X=%d",(a/(b-c)));
    }
    else {
        printf("error:division by zero");
    }
    return 0;
}