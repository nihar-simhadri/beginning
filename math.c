#include<stdio.h>
#include<math.h>
int main()
{
    int add,sub,multi,divi,mod,a,b;
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    add=a+b;
    sub=a-b;
    multi=a*b;
    divi=a/b;
    mod=a%b;
    printf("the output of add,sub,multi,divi,mod is %d,%d,%d,%d,%d",add,sub,multi,divi,mod);
}
