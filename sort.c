#include<stdio.h>

//������
void Print_num()
{
	//100���ڵ�����  ���� 
 	int i = 0;
 	int j = 0;
	 for (i = 2; i < 100; i++)
	 {
	 	//�ж��Ƿ�Ϊ����
		  for (j = 2; j < i; j++)
		  {
		  	if ( (i % j ) == 0)
		  	break;
		  }
		  if (j >= i)
		  printf("%d ", i); 
	 }
 } 

//ѡ������ 
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
	
	printf("ѡ����������:\n");
	for ( i = 0; i < len; i++)
	{
		printf("%d ",arr[i]);
	 } 
 } 
 
 void Bubble_Sort(int * arr, int len)
 {
 	int i = 0;
	 int j = 0;
	 for (i = len - 1; i > 0; i--) //�Ƚ�len-1�� 
	 {
	 	for (j = 0; j < i; j++)
	 	{
	 		//ÿ������Ԫ����Ƚ� 
	 		if (arr[j] > arr[j+1])
	 		{
	 			int temp = arr[j+1];
	 			arr[j+1] = arr[j];
	 			arr[j] = temp;
			 }
		 }
	  } 
	  
	  printf("\nð����������:\n");
	  for (i = 0; i < len; i++)
	  {
		  printf("%d ",arr[i]); 
	  }
 } 
 
 //��������
 int Compare(const void * a, const void * b)
 {
 return (*(int*)b - *(int*)a); 
 } 
 
 void quick_sort(int * arr)
 {
 	printf("������������;\n");
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
 
