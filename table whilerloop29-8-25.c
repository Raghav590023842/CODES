//WAP to print the table of a number given by user in the table format

#include<stdio.h>
int main()
{
	int i=1,num;
	printf("Enter the number %d",num);
	scanf("%d",&num);
	
	while(i<=10)
	{
		printf("%d*%d=%d\n",num,i,num*i);
		i++;
	}
	
	return 0;
}
