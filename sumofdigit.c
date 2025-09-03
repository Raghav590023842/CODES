//WAP to print sum of digits of any number.

#include<stdio.h>
int main()
{
	int i =1475,n,sum=0;
	while(i>0)
	{
		n=i%10;
		sum=sum+n;
		i=i/10;
	}
	printf("Sum of Digits= %d\n",sum);
	return 0;	
}

