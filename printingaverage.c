# include <stdio.h> 
int main() 
{ 
 int i, n, d ;  
 printf("Enter the limit : ") ; 
 scanf("%d", &n) ; 
 printf("Enter the number : ") ; 
 scanf("%d", &d) ; 
 printf("The multiples of  %d are :\n", d) ; 
 for(i = 1 ; i <= n ; i++) 
  if(i % d == 0) 
   printf("%d\t\n", i) ;  

}
