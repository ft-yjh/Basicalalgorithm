#include<stdio.h>
#include<math.h> 

void test01()
{
	int i,j;
	for(i = 1; i <= 9; i++)     //���ѭ��������
	{ 
		for(j = 1; j <= i; j++) //�ڲ�ѭ��������
		{
			printf("%d*%d=%-4d",i,j,i*j);
		}
		printf("\n");
	}
}

void atest02()
{
	/*
	�ŵ����⣺��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�
	С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������
	ÿ���µ���������Ϊ���٣�(���ӵĹ���Ϊ����1,1,2,3,5,8,13,21....)
	��Ҳ��������쳲���������*/
	//
	//쳲���������
	long int f1,f2;
	f1 = f2 = 1;
	int i;
	for(i = 1; i <= 20; i++)
	{
		printf("%12ld %12ld ",f1,f2);
		if(i % 2 == 0)     //���������ÿ�����4��
			printf("\n");
		f1 = f1+f2;       //��һ������ǰ�������ĺ�
		f2 = f1+f2;       //��һ������ǰ�������ĺ�
	}
}
	
	int Fib(int n)
	{
		if (n == 0)
		return 0;
		if(n == 1)
		return 1;
		return (Fib(n-1) + Fib(n-2));
		
	}
	
	void btest02()
	{
		int i = 0;
		for (i = 2; i < 20; i++)
		{
			printf("%d ",Fib(i));
		}
	}
 
/*�ж�101-200֮���ж��ٸ���������������������������ĸ�����

����������ж������ķ�������һ�����ֱ�ȥ��2��sqrt(�����)������ܱ������� 

���������������������֮��������*/
void SuShu()
{
	int i = 0;
	int j = 0; 
	int num = 0;
	for(i = 101; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i + 1); j++)
		{
			if ((i % j) == 0)
			break;
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
			num++;
		}
	} 
	printf("\n����: %d\n", num);
	
} 

void WanShu()
{
	/*һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6=1��2��3.���
    �ҳ�1000���ڵ�����������*/
    int i = 0;
    int arr[10];
    int j = 0;
    int k = 0;
    for (i = 2; i < 1000; i++)
    {
    	int n = -1;
    	int s = i;
    	for (j = 1; j < i; j++)
    	{
    		
    		if ((i % j) == 0)
    		{
    			s = s - j;
			    n++;
			    arr[n] = j;
			}
			if (s == 0)
			{
				
				printf("%d������:\n",i);
				printf("����Ϊ: \n");
				for (k = 0; k <= n; k++)
				{
					printf("%d ", arr[k]);
				}
				printf("\n");
				j = i;
			}
		}
	}
}


	
int main()
{
	//test01();
	//atest02();
	//btest02();
	//SuShu();
	//WanShu();
	
	return 0;
}
