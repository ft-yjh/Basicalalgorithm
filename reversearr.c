#include<stdio.h>
#include<string.h> 

//打印
void PrintArr(int * arr, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
 } 

void reverse_arr1(int * arr, int len)
{
	//空间复杂度为数组arr[] 
	int i = 0;
	int temp[len];
	memset(temp,0,len);
	for (i = 0; i < len; i++)
	{
		temp[i] = arr[len-1-i];
	}
	for (i = 0; i < len; i++)
	{
		arr[i] = temp[i];
	}
	PrintArr(arr,len);
}

void reverse_arr2(int * arr, int len)
{
	//空间复杂度为 int 类型的变量 
	int t = 0;
	int i = 0;
	for (i = 0; i < len/2; i++)   1 2 3 4 5    6 7 8 9 10
	{
		t = arr[i];
		arr[i] = arr[len-i-1];
		arr[len-i-1] = t;
	}
	PrintArr(arr,len);
}


int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int length = sizeof(arr) / sizeof(int);
	
	//reverse_arr1(arr,length);
	reverse_arr2(arr,length);
	return 0;
}
