//wap to accept a string from a user 
//and count the number of 'a' in that string

#include <stdio.h>

int main()
{
    char string[50];
    int i, count = 0;

    printf("Enter a String:\n");
    fgets(string, 50, stdin); 

    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'a' || string[i] == 'A')
        {
            count++;
        }
    }

    printf("Number of 'a' in the string = %d\n", count);

    return 0;
}

