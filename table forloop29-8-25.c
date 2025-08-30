//WAP to print the table of a number given by user in the table format

#include<stdio.h>
int main()
{
	int i=1,num;
	printf("Enter the number %d",num);
	scanf("%d",&num);

	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",num,i,num*i);
	}
	
	return 0;
}
