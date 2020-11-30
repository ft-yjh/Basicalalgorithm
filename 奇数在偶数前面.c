#include <stdio.h>
#include <string.h>
#include <assert.h>

//�ж�һ���������� num & 1 = 1 

void remove_odd(int arr[], int size)
{
    int left = 0;
    int right = size -1;
    int tmp = 0;
    assert(arr != NULL);
    while(left < right)
    {
    	//���������,left++ 
        while(left<right && ((arr[left] &1) == 1)) 
        {
            left++;
        }
        //�����ż��,right-- 
        while(left<right && ((arr[right] &1) != 1))
        {
            right--;
        }
        
        tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
    }
}
int main()
{   
    int i = 0;
    int arr[] = {8,3,9,5,2,7,4,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    remove_odd(arr, size);
    for(i=0; i<size; i++)
    {
        printf("%d", arr[i]);
    }
}
