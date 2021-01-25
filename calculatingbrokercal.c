#include<stdio.h>
int main()
{
    float commission,value;
    printf("enter the value of trade: ");
    scanf("%f",&value);
    if (value<=2500.00)
    {
        commission=30.00 + 0.17 * value;
    }
    else if (value<6250.00)
    {
        commission=56.00 + 0.6 *  value;
    }
    else if (value<20000.00f)
    {
        commission=76.00 + 0.34 * value;
    }
    else if (value<50000)
    {
        commission=100 + 0.22 * value ;
    }
    else if (value<500000)
    {
        commission=155 + 0.11 * value ;
    }
    else if (value>500000)
    {
        commission=255 + 0.09 * value;
    }
    printf("commission: $%.2f\n",commission);
    return 0 ;

}
