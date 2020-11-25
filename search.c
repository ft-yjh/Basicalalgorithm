#include<stdio.h>

//顺序查找法(设置监视哨)  
//返回0表示为查到 
int SeqSearch(int * arr, int len, int det)
{
	arr[0] = det;
	int i = len;
	while (arr[i] != det)
	i--;
	return i;
}

//折半查找(必须是有序的)
int BinSrch(int * arr, int len, int det)
{
	int high = len;
	int low = 1;
	
	while(low <= high)
	{
	int mid = (low + high) / 2;
	if (arr[mid] == det)
	return mid;
	if (det < arr[mid])
	high = mid -1;
	else
	low = mid + 1;
    } 
    
    printf("没有该元素\n"); 
 }
 
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int length = sizeof(arr) / sizeof(int);
	//printf("%d",length);
	//printf("下标为: %d",BinSrch(arr, length, 100));
	
	int arr1[11] = {0,1,2,3,4,5,6,7,8,9,10};
	int length1 = sizeof(arr1)/sizeof(int);
	printf("顺序查找为: \n");
	printf("%d", SeqSearch(arr1, length1-1, 20));
	
	
}
