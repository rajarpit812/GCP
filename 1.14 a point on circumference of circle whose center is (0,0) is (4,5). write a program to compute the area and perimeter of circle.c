/*a point on circumference of circle whose center is (0,0) is (4,5).
write a program to compute the area and perimeter of circle*/

#include <stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    float a,b,r;
    r= sqrt((0-4)*(0-4)+(0-5)*(0-5));
    a=PI * r*r;
    b=2*PI*r;
    printf("Area is %.2f and perimeter is %.2f",a,b);
     return 0;
}