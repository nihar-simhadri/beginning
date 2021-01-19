#include <stdio.h>
#include <stdio.h>

int main()
{
   int squareside, area;

   printf("Enter the side of square: ");
   scanf("%d", &squareside);
   area = squareside * squareside;

   printf("Area of the square: %d", area);
   return 0;
}