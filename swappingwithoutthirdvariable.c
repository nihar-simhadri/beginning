#include <stdio.h>
int main()
{
    int a ,b;
    printf("enter two variables :");
    scanf("%d%d",&a,&b);
    printf("the value of a and b before swapping are %d,%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of a,b after swapping are %d,%d",a,b);
}
