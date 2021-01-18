#include <stdio.h>
int main()
{
    int password,re_enter_password;
    printf("enter your password\n");
    scanf("%d",&password);
    printf("re_enter_password\n ");
    scanf("%d",&re_enter_password);
    if (password==re_enter_password)
    {
        printf("valid password ");
    }
    else
    {
        printf("invalid password ");

    }
        
        
    
}
