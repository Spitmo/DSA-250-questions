#include<stdio.h>
int main()
{
    int dd,mm,yyyy;
    printf("enter date(dd/mm/yyyy) form: ");
    scanf("%d %d %d",&dd,&mm,&yyyy);
    if(yyyy>=1900 && yyyy<=8000)
    {
        if(mm>=1 && mm<=12)
        {
            if((dd>=1 && dd<=31) && (mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12))
            printf("date is valid\n");
            else if((dd>=1 && dd<=30) && (mm==4||mm==6||mm==9||mm==11))
            printf("date is valid\n");
            else if((dd>=1 &&dd<=28) && (mm==2))
            printf("date is valid\n");
            else if((dd>=1 && dd<=28) &&(mm==2))
            printf("date is vallid\n");
            else if((dd>=1 && dd<=29) && (mm==2) && ((yyyy%4==0) && (yyyy%400==0 || yyyy%100!=0)))
            printf("date is valid\n");
            else
            printf("day is invalid\n");
        }
        else 
        printf("month is not valid\n");
    }
    else 
    printf("year is not valid\n");
    return 0;
}
