#include <stdio.h> 
int main()
{
int var1, var2, temp; 
printf("Enter two integers\n");
scanf("%d%d", &var1, &var2);
printf("before swappingnfirst variable is %d second variable is  %d\n", var1, var2);
temp = var1;
var1 = var2;
var2 = temp;
printf("after swapping first variable is %d  second variable %d", var1, var2);
return 0;
}