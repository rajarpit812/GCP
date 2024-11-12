#include<stdio.h>
int main(){
    int a=0;
    float b=0,c=0;
    printf("Conversion from C to F Press 1 else Press 2");
    scanf("%d",&a);
    if (a==1)
    {
        printf("write degree celsius value:");
        scanf("%f",&b);
        printf("%.3f°C is %.3f F",b,1.8*b+32);
    }
    else if (a==2)
    {
        printf("write fahrenheit value:");
        scanf("%f",&c);
        printf("%.3fF is %.3f °C",c,(c-32)*(5.0/9.0));
    }
    
}