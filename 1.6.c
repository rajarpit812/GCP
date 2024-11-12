//finfing area of a circle by radius
#define PI 3.14
#include<stdio.h>
int main()
{
    float r=0,a=0;
    printf("radius of curvature:");
    scanf("%f",&r);
    a=PI*r*r;
    printf("area is %f",a);
    return 0;
}