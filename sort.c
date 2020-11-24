#include<stdio.h>

//求质数
void Print_num()
{
	//100以内的质数  质数 
 	int i = 0;
 	int j = 0;
	 for (i = 2; i < 100; i++)
	 {
	 	//判断是否为质数
		  for (j = 2; j < i; j++)
		  {
		  	if ( (i % j ) == 0)
		  	break;
		  }
		  if (j >= i)
		  printf("%d ", i); 
	 }
 } 

//选择排序 
void Select_Sort(int * arr, int len)
{
	int i = 0;
	int j = 0;
	
	for ( i = 0; i < len-1; i++)
	{
		for ( j = i + 1; j < len; j++)
		{
			if (arr[j] < arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
	printf("选择排序的输出:\n");
	for ( i = 0; i < len; i++)
	{
		printf("%d ",arr[i]);
	 } 
 } 
 
 void Bubble_Sort(int * arr, int len)
 {
 	int i = 0;
	 int j = 0;
	 for (i = len - 1; i > 0; i--) //比较len-1趟 
	 {
	 	for (j = 0; j < i; j++)
	 	{
	 		//每相邻两元素相比较 
	 		if (arr[j] > arr[j+1])
	 		{
	 			int temp = arr[j+1];
	 			arr[j+1] = arr[j];
	 			arr[j] = temp;
			 }
		 }
	  } 
	  
	  printf("\n冒泡排序的输出:\n");
	  for (i = 0; i < len; i++)
	  {
		  printf("%d ",arr[i]); 
	  }
 } 
 
 //快速排序
 int Compare(const void * a, const void * b)
 {
 return (*(int*)b - *(int*)a); 
 } 
 
 void quick_sort(int * arr)
 {
 	printf("快速排序的输出;\n");
	qsort(arr, 10,sizeof(int),Compare);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
 }
 

int main()
{
	int arr[10] = {10,8,200,7,6,2,3,1,5,9};
	//Select_Sort(arr,10);
	//Bubble_Sort(arr,10);
	quick_sort(arr);
 } 
 
 
 void swap(int * a, int * b)
 {
 	int * temp;
 	temp = (int *)malloc(sizeof(int));
	*temp = *b;
 	*b = *a;
 	*a = *temp;
 }
 
 int main()
 {
 	int a = 3; 
 	int b = 5;
 	swap(&a,&b);
 	printf("%d %d", a, b);
  } 
 
