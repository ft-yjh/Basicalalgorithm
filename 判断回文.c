#include<stdio.h>
#include<string.h>

//判断一个字符串是否为回文数 
int JudgeString(char arr[])
{
	int left = 0;
	int right = strlen(arr) - 1;
	
	while (left < right)
	{
		if (arr[left] != arr[right])
		return 0;
		left++;
		right--;
	}
	return 1;
}

//判断一个数是否为回文数 
void JudgeNum(int num)
{
	int tmp = 0;
	int copynum = num;
	int newnum = 0;
	while (num > 0)
	{
		tmp = num % 10;
		num /= 10;
		newnum *= 10;
		newnum += tmp;
	}
	if (newnum == copynum)
	printf("true\n");
	else
	printf("false\n");
}

void test01()
{
	char arr[] = "abccba";
	if (JudgeString(arr))
	printf("true\n");
	else
	printf("false\n");
}

void test02()
{
	int num = 1234321;
	JudgeNum(num);
}

int main()
{
	test01();
	test02();
	 
}
