#include<stdio.h>
int main()
{
int withdrawl_amt;
float initial_bal;
printf("your initial account balance is  :\n ");
scanf("%f",&initial_bal);
printf("enter the amount to withdraw  :");
scanf("%d",&withdrawl_amt); 
if(withdrawl_amt %5==0 &&(initial_bal>(withdrawl_amt+0.5)))
{
printf("%.2f",(initial_bal-(withdrawl_amt+0.5)));
}
else
{
printf("%.2f",initial_bal);
}
return 0;
}

