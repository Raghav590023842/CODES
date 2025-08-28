#include <stdio.h>

int main() 
{
    int i;
    int n=0;
    for(i=1;i<=10;i=i++)
    {
        n = n+1/i;
    }
    printf("%d",n);

    return 0;
}
