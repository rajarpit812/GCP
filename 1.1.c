#include <stdio.h>
int main(){
    int a=0,b=0,c=0;
    printf("enter a number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("enter third number:");
    scanf("%d",&c);
    printf("given equation is: %dx + %dy = %d",a,b,c);
    return 0;
}