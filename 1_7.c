#include<stdio.h>
#include<math.h>
int main(){
    int a=0,b=0,add=0,minus=0;
    printf("enter a number:");
    scanf("%d",&a);
    printf("enter a number:");
    scanf("%d",&b);
    add=add(a,b);
    minus=sub(a,b);
    printf("sum is %d",add);
    printf("difference is %d",minus);
    return 0;
}