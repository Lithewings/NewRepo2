#pragma once
#include <cstddef>
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode, * LinkList;
//����������Ϊ�������ָ��

//������ĳ�ʼ��
bool InitList(LinkList& L);

//�жϵ������Ƿ�Ϊ��(��ͷ��㣩
bool Empty(LinkList L);

//�����������
bool ListInsert(LinkList& L, int i, int e);
