#include<stdio.h>
int main()
{
    int lower,upper,decrement;
    float fahr,celsius;
    lower=0;
    upper=300;
    decrement=10;
    fahr=upper;
    while(fahr>=lower)
    {
        celsius=5*(fahr-32)/9;
        printf("%1.1f \t %0.4f\n",fahr,celsius);
        fahr=fahr-decrement;
    }

}      


