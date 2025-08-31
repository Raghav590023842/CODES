//WAP to accept a number from user upto which you have to display fivonacci series

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number %d",n);
	scanf("%d",&n);
	int n1=0,n2=1,n3,i=2;
	printf("%d%d",n1,n2);
	while (i<n)
	{
		n3=n1+n2;
		printf("%d",n3);
		n1=n2;
		n2=n3;
		i++;	
	}
	
	return 0;
}
