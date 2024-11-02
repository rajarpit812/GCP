#include <stdio.h>
int main(){
    char x [150];
    char y [150];
    char z [150];
    printf("enter name:");
    scanf("%[^\n]",&x);
    getchar();
    printf("enter door no:");
    scanf("%[^\n]",&y);
    getchar();
    printf("enter street:");
    scanf("%[^\n]",&z);
    printf("Name :%s\nDoor no:%s\nStreet%s\n",x,y,z);
    return 0;
    
}