#include"静态顺序表.h"
#include<stdio.h>
SqList L;
void test()				
{
	for (int i = 1; i <10; i++)				//插入9个数据
	{
		ListInsert(L, i, i);
	}
}
int main()
{
	InitList(L);
	test();
	int e;
	ListInsert(L, 1, 114514);			 //插入一个不好的数据，然后删除
	printList(L);
	ListDelete(L, 1, e);
	printList(L);
}