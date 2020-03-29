#include<stdio.h>
#include<string.h>
int matrix (int r, int c, int a[][10]);
int main()
{
	int p, q, arr[10][10],b[10][10];
	printf("enter the number of rows and columns:");
	scanf("%d%d",&p, &q);
	arr[10][10]= matrix (p, q, arr);
}
int matrix (int r, int c, int a[][10])
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The %d x %d matrix formed from above elements is : \n", i, j);
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}	
}
