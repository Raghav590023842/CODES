#include<stdio.h>
int main()
{
    int bs=
    printf("Enter the Basic Salary %d",bs);
    scanf("%d",&bs);

    int hra =(30/100*bs);
    int da =(20/100*bs);
    int cen =(7000);
    int loan =(14000);
    int tax =(10/100*bs);

    int gross =(hra + da + cen);
    int net =(gross - loan - tax);

    printf("The Gross Salary is %d",gross);
    printf("The Net Salary is %d",net);

    return 0;
}