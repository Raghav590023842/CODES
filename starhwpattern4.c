//      *
//    *   *
//  *   *   *  
//    *   *
//      *


#include <stdio.h>

int main()
{
    int i, j, k;
    int rows = 3; 

    
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= rows - i; j++)
        {
            printf("  ");  
        }

        for(k = 1; k <= i; k++)
        {
            printf("*");
            if(k != i)
                printf("   ");  
        }

        printf("\n");
    }


    for(i = rows - 1; i >= 1; i--)
    {
        for(j = 1; j <= rows - i; j++)
        {
            printf("  ");
        }

        for(k = 1; k <= i; k++)
        {
            printf("*");
            if(k != i)
                printf("   ");
        }

        printf("\n");
    }

    return 0;
}

