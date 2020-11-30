#include<stdio.h>
#define N 20

int main()
{
	int i = 0;
	int j = 0;
	int arr[N+1][N+1] = {0};
	for (i = 1; i <= N; i++)
	{
		arr[i][1] = 1;
		arr[i][i] = 1;
	}
	
	for (i = 3; i <= N; i++)
	{
		for (j = 2; j < i; j++)
		{
			arr[i][j] = arr[i-1][j] + arr[i-1][j-1]; 
		}
	}
	
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	 } 
	
 } 
