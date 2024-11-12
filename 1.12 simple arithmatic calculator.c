#include<stdio.h>
int main()
{
    float x,y,s,d,p,div;
    //taking X as input
    printf("enter the value of X:");
    scanf("%f",&x);
    printf("enter the value of Y:");
    scanf("%f",&y);
    s=x+y;  //sum
    d=x-y;  //difference
    p=x*y;  //multiplying
    div=x/y;    //dividing
    // output
    printf("\nResult:\n\n");
    printf("X=%.2f\n",x);
    printf("Y=%.2f\n",y);
    printf("Sum=%.2f\n",s);
    printf("Difference=%.2f\n",d);
    printf("Product=%.2f\n",p);
    printf("Division=%.2f",div);
    return 0;

}