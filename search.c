#include<stdio.h>

//˳����ҷ�(���ü�����)  
//����0��ʾΪ�鵽 
int SeqSearch(int * arr, int len, int det)
{
	arr[0] = det;
	int i = len;
	while (arr[i] != det)
	i--;
	return i;
}

//�۰����(�����������)
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
    
    printf("û�и�Ԫ��\n"); 
 }
 
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int length = sizeof(arr) / sizeof(int);
	//printf("%d",length);
	//printf("�±�Ϊ: %d",BinSrch(arr, length, 100));
	
	int arr1[11] = {0,1,2,3,4,5,6,7,8,9,10};
	int length1 = sizeof(arr1)/sizeof(int);
	printf("˳�����Ϊ: \n");
	printf("%d", SeqSearch(arr1, length1-1, 20));
	
	
}
