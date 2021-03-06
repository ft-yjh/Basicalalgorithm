#include <stdio.h>
#include <string.h>
#include <assert.h>

//判断一个数是奇数 num & 1 = 1 

void remove_odd(int arr[], int size)
{
    int left = 0;
    int right = size -1;
    int tmp = 0;
    assert(arr != NULL);
    while(left < right)
    {
    	//如果是奇数,left++ 
        while(left<right && ((arr[left] &1) == 1)) 
        {
            left++;
        }
        //如果是偶数,right-- 
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
