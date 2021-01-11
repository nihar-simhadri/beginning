#include <stdio.h>
int main()
{
int n,i;
printf("Type the number:");
scanf("%d",&n);
i=2;
while (i<(n/2))
{
if (n%i==0)
{
printf("%d is not a Prime Number",n);
break ;
}
i=i+1;
}
if (i>=(n/2))
{
printf("%d is a Prime Number",n);
}
return 0;
}

