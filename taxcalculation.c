#include<stdio.h>
int main ()
{
    int income,tax;
    printf("enter your income:\n");
    scanf("%d",&income);
    if (income<=500000)
    {
        tax=income*5/100;
    }
    if (income<=1000000)
    {
        tax=income*7.5/100;
    }
    else if ( income>1000000);
    {
        tax=income*10/100;
    }
    printf("your tax for the income is %d",tax);
}