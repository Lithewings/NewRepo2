#pragma once
#define InitSize 10							//����Ĭ�ϳ���				
#include<stdio.h>
typedef struct {																										//����Ƕ�̬���飬ʹ�ø�����
	int *data;	
	int MaxSize;
	int length;								
}SqList;


//��ʼ��
void InitList(SqList& L);
//��������
bool ListInsert(SqList& L, int i, int e);
//ɾ������
bool ListDelete(SqList& L, int i, int& e);
//��ӡ����
void printList(SqList L);