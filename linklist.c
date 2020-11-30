#include<stdio.h>
#include<stdlib.h>
 
typedef struct LinkList
{
	int data;
	struct LinkList * next;
}LinkList;

//链表的算法 

//逆置带头结点的单链表
void ReverseList(LinkList * L)
{
	LinkList * p = L->next;
	L->next = NULL;
	while (p != NULL) 
	{
		LinkList * q = p->next;
		//头插法 
		p->next = L->next;
		L->next = p;
		p = q;
	}
 }
 
 //判断链表是否有环
 int Is_Cycle(LinkList * L)
 {
 	//设置前后指针
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
 
 //小于第一结点放在第一结点之前
 //  大于第一结点放在第一结点之后 
 void changelist(LinkList * L)
 {
 	//至少要两个元素
	 if (!L->next)
	 exit(0); 
	 
	 LinkList * p1 = L->next;  //指向第一元素
	 LinkList * pre = p1;
	 LinkList * p =  p1->next;
	 
	 /*顺次从p开始取结点,比p1->data小的插在头结点之后,,比p1->data大的结点不做处理,
	 继续检测后面的结点*/ 
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
		  	//删除p结点 
		  	pre->next = p->next;
		  	//头插法 
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
