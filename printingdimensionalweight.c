#include <stdio.h>
int main()
{
    int height,weight,volume,length,width ;
    printf("enter the value of height\n");
    scanf("%d",&height);
    printf("enter the value of length");
    scanf("%d",&length);
    printf("enter the value of width");
    scanf("%d",&width);
    volume=height*length*width;
    weight=(volume+165)/166;
    printf("volume (cubic inches):%d/n",volume);
    



}