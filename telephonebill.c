#include<stdio.h>
int main()
{
    int call=
    printf("Enter the total no. of calls %d",call);
    scanf("%d",&call);

    int P=
    
    if (call>=0) && (call<=75)
    {
        P=0;
    }

    if ((call>75) && (call<=200))
    {
        P=((call-75)*1);
    }

    if ((call>200) && (call<=300))
    {
        P=((call-200)*2+125);
    }

    if ((call>300) && (call<=400))
    {
        P=((call-300)*4 +325);
    }
    
    if (call>400)
    {
        P=((call-400)*6 +725);
    } 

    printf("Your Total Bill is %d",P);
    return 0;
}