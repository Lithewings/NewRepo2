#pragma once
#include <cstddef>
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode, * LinkList;
//将单链表定义为单链表和指针

//单链表的初始化
bool InitList(LinkList& L);

//判断单链表是否为空(带头结点）
bool Empty(LinkList L);

//单链表按序插入
bool ListInsert(LinkList& L, int i, int e);
