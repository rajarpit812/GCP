#include<stdio.h>
#include<math.h>
int main()
{
    float a=0,b=0,c=0,s=0,area;        //a,b,c are sides of triangle and s is semi perimeter
    printf("enter sides of triangle:");
    //getting value of a,b,c
    scanf("%f %f %f",&a,&b,&c);
    //s nikalo
    s=(a+b+c)/2;
    if (a+b>c && b+c>a && a+c>b)
    {
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.3f",area);
    }
    else
    {
        printf("not a valid triangle");
    }
    
    return 0;
}
