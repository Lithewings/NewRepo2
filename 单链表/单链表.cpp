#include "单链表.h"
#include <malloc.h>
bool InitList(LinkList& L)
{
	L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
		return false;	//在申请空间失败后，头指针指向空内存，自身为空
	L->next = NULL;		//L的下个结点指针暂时为空
	return true;		
}

bool Empty(LinkList L)
{
	if (L->next== NULL)
		return true;
	else
		return false;
}

bool ListInsert(LinkList& L, int i, int e) {
	if (i < 1)
		return false;							//判断i的合法性，插入的数据不可以是头结点
		LNode* p;								//声明一个指向单链表的指针
		int j = 0;
		p = L;									//这个指针先暂时指向头结点
	while (p != NULL && j < i - 1) {			//单链表不为空表，且插入的结点位置是不头结点之后
		p = p->next;							//p逐渐扫描结点，直到到达所插入的结点位置
		j++;
	}	
	if (p == NULL)								//p最终指向了空结点，不合法
	return false;
												//至此，p指针找到了结点位置
	LNode* s = (LNode*)malloc(sizeof(LNode));	//定义新结构体指针s，指向新创建的空结点
	s->data = e;								//结构体指针访问单链表的data数据元素，为其赋值e
	s-> next = p->next;							//s的下一跳就是p的下一跳，插入的结点有了正确后继									
	p->next = s;
	return true;								//p的下一跳就是s的上一跳，插入的结点有了正确前驱
}
