#include<stdio.h>
int main()
{
    int a=0,i=1;
    float b;
    printf("number:");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        b=b+(1.0/i);
    }
    printf("harmonic series is:%.3f",b);

    return 0;
}