#include"��̬˳���.h"
#include<stdio.h>
SqList L;
void test()				
{
	for (int i = 1; i <10; i++)				//����9������
	{
		ListInsert(L, i, i);
	}
}
int main()
{
	InitList(L);
	test();
	int e;
	ListInsert(L, 1, 114514);			 //����һ�����õ����ݣ�Ȼ��ɾ��
	printList(L);
	ListDelete(L, 1, e);
	printList(L);
}