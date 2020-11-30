#include<stdio.h>

int main()
{
	char ch[] = {'a','b','c','d','e'};
	char ch1[] = "abcde";
	printf("sizeof = %d\n", sizeof(ch1)/sizeof(char));
	printf("strlen = %d\n",strlen(ch1));
	
	
	/*char ch[11] = {'C','h','i','n','a','g','n','o','r','t','S'};
	int len = sizeof(ch)/sizeof(char);
	printf("---------------\n");
	printf("sizeof = %d\n",len);
	printf("strlen = %d\n", strlen(ch));
	printf("------------------\n"); 
	int i = 0;
	for (i = 0; i < (len-1)/2; i++)
	{
		char c1 = ch[i];
		ch[i] = ch[len-1-i];
		ch[len-1-i] = c1;
	}
	printf("·´×ªºó: %s", ch);
	*/
	
	return 0;
}
