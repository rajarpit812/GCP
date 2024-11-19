/*DISTANCE BETWEEN TWO POINTS (X1,Y1) AND (X2,Y2)*/

#include <stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    float d;
    printf("write first coordinate as x1,x2:");
    scanf("%d,%d",&x1,&y1);
    printf("write second coordinate as y1,y2:");
    scanf("%d,%d",&x2,&y2);
    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    
    printf("%.2f",d);
     return 0;
}