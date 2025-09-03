//WAP to accept a number from a user and check if it is Armstrong or not ie. sum of cube of digit is same.

#include<stdio.h>
int main()
{
	int num;
	printf("Enter a Number %d",num);
	scanf("%d",&num);
	int temp=num;
	int sum=0,n;
	while(num>0)
	{
		n=num%10;
		sum=sum+(n*n*n);
		num=num/10;
	}
	if (sum==temp)
	{
		printf("IT IS ARMSTRONG.");
	}
	else
	{
		printf("IT IS NOT ARMSTRONG.");
	}
	return 0;	
}

