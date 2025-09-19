#include<stdio.h>
int main()
{
	int arr1[3][3],i,j,sum=0;
	printf("Input elements in the matrix: \n");
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if (i==j)
			{
				sum = sum + arr1[i][j];
			}
		}
	}
	printf("Sum of Diagonal Elements is: %d",sum);
	return 0;
}
