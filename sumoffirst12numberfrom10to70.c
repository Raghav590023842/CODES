// write a program to execute a loop from 10 to 70 and display the sum of only first 12 odd numbers



#include<stdio.h>
int main()
{
    int i, cnt=0;
    int sum =0;
    for(i=10;i<=70;i++)
    {
        
        if(i%2!=0)
        {
            cnt=cnt+1;
            if(cnt<=12)
        {
            sum = sum+i;
            
        }
        
        }
        
    }
        printf("%d",sum);
    return 0;
}
