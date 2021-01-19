#include<stdio.h>
#include<conio.h>
int main()
{
    float radius,area,pi;
    printf("Enter the Radius of a Circle : ");
    scanf("%f",&radius);
    pi=3.14;
    area = pi*radius*radius;
    printf("Area of Circle is: %f",area);
}