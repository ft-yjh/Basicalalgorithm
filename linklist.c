#include<stdio.h>
#include<stdlib.h>
 
typedef struct LinkList
{
	int data;
	struct LinkList * next;
}LinkList;

//������㷨 

//���ô�ͷ���ĵ�����
void ReverseList(LinkList * L)
{
	LinkList * p = L->next;
	L->next = NULL;
	while (p != NULL) 
	{
		LinkList * q = p->next;
		//ͷ�巨 
		p->next = L->next;
		L->next = p;
		p = q;
	}
 }
 
 //�ж������Ƿ��л�
 int Is_Cycle(LinkList * L)
 {
 	//����ǰ��ָ��
	 LinkList * quicklist = L;
	 LinkList * slowlist = L;
	 
	 while (quicklist && quicklist->next)
	 {
	 	quicklist = quicklist->next->next;
		slowlist = slowlist->next;
	 	
	 	if (slowlist == quicklist)
	 	{
	 		return 1;
		}
		 
	 }  
	   return 0;
 } 
 
 //С�ڵ�һ�����ڵ�һ���֮ǰ
 //  ���ڵ�һ�����ڵ�һ���֮�� 
 void changelist(LinkList * L)
 {
 	//����Ҫ����Ԫ��
	 if (!L->next)
	 exit(0); 
	 
	 LinkList * p1 = L->next;  //ָ���һԪ��
	 LinkList * pre = p1;
	 LinkList * p =  p1->next;
	 
	 /*˳�δ�p��ʼȡ���,��p1->dataС�Ĳ���ͷ���֮��,,��p1->data��Ľ�㲻������,
	 ����������Ľ��*/ 
	 while (p)
	 {
	 	LinkList * q = q;
	 	if (p->data != p1->data)
		 {
		 	pre = p;
		 	p = q;
		  } 
		  else
		  {
		  	//ɾ��p��� 
		  	pre->next = p->next;
		  	//ͷ�巨 
			p->next = L->next;
		  	L->next = p;
		  	
		  	p = q;
		  }
	  
 	} 
 }

int main()
{
	
	
	return 0;
 } 
