#include<stdio.h>
#include<assert.h>

void Compare(int a, int b,int * pp)
{
	assert(pp);
	assert(a > 0);
}

int main()
{
	int * p ;
	p = NULL;
	Compare(0,1,p);
	return 0;
 } 
