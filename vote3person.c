// write a program to create a voting poll/machine for 3 candidates and display the person with highest number of votes using switch case


#include<stdio.h>
int main()
{
    int vote, x=0, y=0, z=0;
    printf("Write 1 for A\n 2 for B\3 for C to vote for respective candidate %d",vote);
    scanf("%d",&vote);
    switch(vote)
    {
        case 1:
        {
            x = x+1;
            break;
        }
        
        case 2:
        {
            y = y+1;
            break;
        }
        
        case 3:
        {
            z = z+1;
            break;
        }
        
    }
    
    if (x>y && x>z)
       { printf("A wins");}
        
    if (y>x && y>z)
       { printf("B wins");}
        
    if (z>x && z>y)
       { printf("C wins");}
    
    return 0;
}