#pragma once
#define MaxSize 10							//������󳤶�				
#include<stdio.h>
typedef struct {							//typedef���Զ�����������																				//����Ƕ�̬���飬ʹ�ø�����
	int data[MaxSize];						//�������飬�����������Ԫ��
	int length;								//˳���ĵ�ǰ����
}SqList;


//��ʼ��
void InitList(SqList& L);
//��������
bool ListInsert(SqList& L, int i, int e);
//ɾ������
bool ListDelete(SqList& L, int i, int& e);
//��ӡ����
void printList(SqList L);