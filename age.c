#include <stdio.h>
int main()
{
    int currentage , currentyear,birthyear,and;
    printf("enter your birth year\n");
    scanf("%d",&birthyear);
    currentyear=2021;
    currentage=currentyear-birthyear;
    if ((currentage>=13 && currentage<=19) )
    {
        printf("teenager %d ",currentage);
    }
    else if ((currentage>=20 && currentage<=29))
    {
        printf("twenties %d",currentage);
    }
}
