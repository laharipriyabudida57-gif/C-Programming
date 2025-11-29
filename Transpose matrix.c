#include<stdio.h>
int main()
{
	int A[10][10],r,c,i,j;
	printf("enter A matrix rows and column sizes");
	scanf("%d%d",&r,&c);
	printf("enter A matrix values");
	for(i=0;i<r;i++)
	{
		for (j=0;j<r;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Transpose matrix is : \n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<r;j++)
		{
			printf("%d",A[i][j]);
		}
		printf("\n");
	}
	return 0;
}
