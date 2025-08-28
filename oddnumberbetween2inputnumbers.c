#include<stdio.h>
int main()
{
    int first;
    printf("Enter the First Number %d",first);
    scanf("%d",&first);
    
    int second;
    printf("Enter the Second Number %d",second);
    scanf("%d",&second);
    
    int i;
    for(i=first;i<=second;i++)
    {
        if(i%2!=0)
        printf("%d",i);
    }
    return 0;
}
