//WAP to accept a number from a user and display the reverse of it.

#include<stdio.h>
int main()
{
	int num;
	printf("Enter a Number %d",num);
	scanf("%d",&num);
	
	int sum,n;
	while(num>0)
	{
		n=num%10;
		sum=(sum*10)+n;
		num=num/10;
	}
	printf("%d",sum);
	return 0;	
}

