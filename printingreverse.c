#include<stdio.h>
int main()
{
    int lower,upper,decrement;
    int fahr,celsius;
    lower=0;
    upper=300;
    decrement=10;
    fahr=upper;
    while(fahr>=lower)
    {
        celsius=5*(fahr-32)/9;
        printf("%3d\t%d\n",fahr,celsius);
        fahr=fahr-decrement;
    }
}    