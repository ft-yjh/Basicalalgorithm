#include<stdio.h>
#include<assert.h>
#include<string.h>

//字符串 

//1.反转字符串
void ReverseString(char * ch, int len)
{
	int i = 0;
	int k = len;
	assert(len > 0);
	for (i = 0; i < len/2; i++)
	{
		char temp = ch[i];
		ch[i] = ch[k-2];
		ch[k-2] = temp;
		k--;
	}
	ch[len] = '\0';
 } 
 
 void ReverseString2(char * start,char * end)
 {
 	assert(start && end);
 	while(start < end)
 	{
 		char  temp = *start;
 		*start = *end;
 		*end = temp;
 		start++;
 		end--;
	 }
 }

void reverse_test01()
{
	char ch1[] = {'y','j','h','C','h','i','n','a','\0'};
	printf("原来: %s\n", ch1);
	int length = sizeof(ch1)/sizeof(char);
	//printf("%d",length);
	//ReverseString(ch1,length);
	//ReverseString2(ch1,&ch1[length-2]);
	printf("反转: %s\n",ch1);
}

void reverse_string(char *start, char *end)
{
    assert(start != NULL && end != NULL);
    while(start < end)
    {
        int tmp = *start;
        *start = *end;
        *end = tmp;
        start++;
        end--;
    }
}

char * left_remove(char * arr, int k)
{
    int len = strlen(arr)-1;
    char *ret = arr;
    assert(arr != NULL);
    reverse_string(arr, arr+len);
    reverse_string(arr, arr+len-k);
    reverse_string(arr+len-k+1, arr+len);
    return ret;
}

void test02()
{
	char arr[] = " i love you";
    int kpoi = 2;
    printf("%s", left_remove(arr, kpoi));
}

int find_first(char * arr, int * Count, int k)
{
    int i = 0;
    assert(arr != NULL);
    for(i=0; i<strlen(arr); i++)
    {
        Count[arr[i]]++;
    }
    for(i=0; i<strlen(arr); i++)
    {
        if(Count[arr[i]] == k)
        {
            return arr[i];
        }
    }
    return -1;
}

void test03()
{
	char arr[] = "i really really like you";
    int arrCount[255] = {0};
    int k = 2;
    int ret = 0;
    if((ret = find_first(arr, arrCount, k)) != -1)
    {
        printf("%c", ret);
    }
    else
    {
        printf("未找到");
    }
}

void print_first(int n)
{
    int i = 0;
    int j = 0;
    for(i=1; i<=n; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
void print_second(int n)
{
    int i = 0;
    int j = 0;
    for(i=1; i<=n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            printf(" ");
        }
        printf("%d\n", i);
    }
}
void print_third(int n)
{
    int i = 0;
    int j = 0;
    for(i=1; i<=n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            printf(" ");
        }
        for(j=0; j<i; j++)
            printf("%d", i);
        printf("\n");
    }
}

void test04()
{
	int n = 4;
    print_first(n);
    print_second(n);
    print_third(n);
}

void print_sequence(int n)
{
    int i = 0;
    int k = 0;
    for(i=1; i<=n/2; i++)
    {
        int sum = 0;
        int tmp = i;
        while(sum < n)
        {
            sum += tmp;
            if(sum == n)
            {
                for(k=i; k<=tmp; k++)
                {
                    printf("%d", k);
                }
                printf("\n");
            }
            tmp++;
        }
    }
}

void test05()
{
	int n = 15;
    print_sequence(n);
 } 

int main()
{
	//reverse_test01();
	//test02();
	//test03();
	//test04();
	test05();
	return 0;
 } 
