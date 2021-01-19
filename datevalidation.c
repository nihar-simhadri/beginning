#include <stdio.h>
int main()
{
    int dd,mm,yy;
    printf("enter date in dd/mm/yyyy format\n");
    scanf("%d/%d/%d",&dd,&mm,&yy);
    if (yy>=1900 && yy<=9999)
    {
        if ((dd>=1 && dd<=31) && (mm ==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
            printf("date is valid \n");
        else if ((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11 ))
            printf("date is valid \n");
        else if ((dd>=1 && dd<=28) && (mm==2) || ((yy%4 == 0 && dd == 29)))
            printf("date is valid \n");    
        else 
            printf("date is not vaild\n");        
        
    }

}