//WAP to display all the prime numbers between 1 and 20.

#include<stdio.h>
int main()
{
	int i;
	printf("1,2,3,");
	for (i=4;i<=20;i++)
	{
		if (i%2!=0)
		{
			if (i%3!=0)
			{
				printf("%d,",i);
			}
		}
	}
	return 0;
}
