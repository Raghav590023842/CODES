//WAP to create a voting system to accept a vote until user presses n and display the count of votes for each candidate.

#include<stdio.h>
int main()
{	
	char ch;
	int vote, x=0, y=0, z=0;
	printf("Do you wish to vote?\n Enter y for Yes\n Enter n for No:");
	scanf(" %c", &ch);
	while (ch=='y')
	{
		printf("Write 1 for A\n 2 for B\n3 for C\n to vote for respective candidate %d",vote);
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
     printf("Do you wish to vote?\n Enter y for Yes\n Enter n for No:");
		scanf(" %c", &ch);
	}
    
    if (x>y && x>z)
       { printf("A wins");
	     printf("Total Number of Votes A got:%d\n Total Number of Votes B got:%d\n Total Number of Votes C got:%d\n",x,y,z);}
        
    if (y>x && y>z)
       { printf("B wins");
	   printf("Total Number of Votes A got:%d\n Total Number of Votes B got:%d\n Total Number of Votes C got:%d\n",x,y,z);}
        
    if (z>x && z>y)
       { printf("C wins");
	   printf("Total Number of Votes A got:%d\n Total Number of Votes B got:%d\n Total Number of Votes C got:%d\n",x,y,z);}

    return 0;
}
