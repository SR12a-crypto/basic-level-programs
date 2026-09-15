#include <stdio.h>
int main()
{
    int year;
    printf("Eter the year: ");
    scanf("%d", &year);

    if((year%400==0) || (year%4==0&&year%100!=0))
    {
        printf("The enetred year is leap year: \n");
    }
    else
    {
        printf("The entered year is not leap year \n");
    }
    return 0;
}
