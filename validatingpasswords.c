#include <stdio.h>
int main()
{
    char password,re_enter_password;
    printf("enter your password\n");
    scanf("%s",&password);
    printf("re_enter_password\n ");
    scanf("%s",&re_enter_password);
    if (password==re_enter_password)
    {
        printf("valid password ");
    }
    else
    {
        printf("invalid password ");

    }
        
        
    
}
