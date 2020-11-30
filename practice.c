#include<stdio.h>
#include<math.h> 

void test01()
{
	int i,j;
	for(i = 1; i <= 9; i++)     //外层循环控制行
	{ 
		for(j = 1; j <= i; j++) //内层循环控制列
		{
			printf("%d*%d=%-4d",i,j,i*j);
		}
		printf("\n");
	}
}

void atest02()
{
	/*
	古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，
	小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问
	每个月的兔子总数为多少？(兔子的规律为数列1,1,2,3,5,8,13,21....)
	这也是著名的斐波那契数列*/
	//
	//斐波那契数列
	long int f1,f2;
	f1 = f2 = 1;
	int i;
	for(i = 1; i <= 20; i++)
	{
		printf("%12ld %12ld ",f1,f2);
		if(i % 2 == 0)     //控制输出，每行输出4个
			printf("\n");
		f1 = f1+f2;       //后一个数是前两个数的和
		f2 = f1+f2;       //后一个数是前两个数的和
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
 
/*判断101-200之间有多少个素数，并输出所有素数及素数的个数。

程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除， 

则表明此数不是素数，反之是素数。*/
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
	printf("\n个数: %d\n", num);
	
} 

void WanShu()
{
	/*一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.编程
    找出1000以内的所有完数。*/
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
				
				printf("%d是完数:\n",i);
				printf("因子为: \n");
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
