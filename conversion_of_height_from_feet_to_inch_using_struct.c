// conversion of height from feet to inch using struct
#include <stdio.h>
struct height
{
    int feet;
    int inch;
}a;

int main() {
    int c=0;
    printf("enter your height-inch:");
    scanf("%d-%d",&a.feet,&a.inch);
    c=12*a.feet+a.inch;
    printf("height in inch is %d",c);

    return 0;
}