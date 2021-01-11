# include <stdio.h> 
int main() 
{ 
 int i, n ,sum ;  
 printf("Enter the limit : ") ; 
 scanf("%d", &n) ; 
   printf("\n Odd Numbers between 0 and %d are : ", n);
  for(i = 1; i <= n; i++)
  {
  	if ( i%2 != 0 ) 
  	{
  		printf("%d  ", i);
        sum = sum + i;
  	}
  }
  printf("\n \n The Sum of Odd Numbers from 1 to %d  = %d", n, sum);

  return 0;
}
