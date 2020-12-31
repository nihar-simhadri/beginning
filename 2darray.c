#include<stdio.h>
int main ()
{
   int i,j;
   int d [3][3]=
   {
       {9,0,1},
       {0,1,2},
       {0,9,9},
   };
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%d",d[i][j]);
       }
       printf("\n");
   }
}