#include<stdio.h>
int main()
{
   int length, breadth, area;

   printf("Enter the Length of Rectangle : ");
   scanf("%d", &length);

   printf("Enter the Breadth of Rectangle : ");
   scanf("%d", &breadth);

   area = length * breadth;
   printf("Area of Rectangle : %d", area);
}