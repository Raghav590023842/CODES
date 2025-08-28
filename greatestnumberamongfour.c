#include<stdio.h>
int main()
{
    int first;
    printf("Enter the First Number %d",first);
    scanf("%d",first);
    
    int second;
    printf("Enter the Second Number %d",second);
    scanf("%d",second);
    
    int third;
    printf("Enter the Third Number %d",third);
    scanf("%d",third);
    
    int fourth;
    printf("Enter the Fourth Number %d",fourth);
    scanf("%d",fourth);
    
    if (first>second && first>third && first>fourth)
        {printf("The Greatest Number is %d", first);}
        
    else if (second>first && second>third && second>fourth)
        {printf("The Greatest Number is %d", second);}
        
    else if (third>second && third>first && first>fourth)
        {printf("The Greatest Number is %d", third);}
        
    else if (fourth>second && fourth>third && fourth>first)
        {printf("The Greatest Number is %d", fourth);}
    
    return 0;
}
