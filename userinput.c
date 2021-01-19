#include <stdio.h>

int main ()
{
   char yourname[100];
   char school[100];
   int yourage;

   printf("Whats your name?\n");
   scanf("%s",yourname); 
   printf("How old are you?\n");
   scanf("%d",&yourage);
   printf("what is your school name?\n");
   scanf("%s",school);
   printf("You are %d years old and your name is %s studing in %s",yourage,yourname,school );
   
}
