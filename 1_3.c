/*program to get multiplication table*/
#include<stdio.h>
int main(){
    int a=0,b=1;
    printf("enter a number");
    scanf("%d",&a);
    for(b==1;b<=10;b++){
        printf("%d X %d = %d\n",a,b,a*b);
    }
    return 0;
}
