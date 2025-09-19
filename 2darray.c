#include<stdio.h>
int main()
{
	int arr1[3][3],i,j;
	printf("Input elements in the matrix: \n");
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("The Matrix is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	return 0;
}
