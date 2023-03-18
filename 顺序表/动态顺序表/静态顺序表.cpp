#include "��̬˳���.h"

void InitList(SqList& L) {
	for (int i = 0; i < MaxSize; i++)	
	L.data[i] = 0;									//��������Ԫ�صĶ��趨��Ϊ0
L.length = 0;										//��ǰ������Ԫ�أ��赱ǰ����Ϊ0
}

bool ListInsert(SqList& L, int i, int e) {			//�ڵ�i��Ԫ�ص�λ�ò���Ԫ��e
	if (i<1 || i>L.length + 1)
		return false;								//���Ҫ�����λ�����������
	if (L.length >= MaxSize)
		return false;								//��ǰ�洢�ռ����������ܼ�������Ԫ�أ�����
	for (int j = L.length; j >= i; j--)
		L.data[j] = L.data[j - 1];					//����i��Ԫ�ؼ�֮���Ԫ�غ��Ƹ���		
	L.data[i - 1] = e;								//�ڵ�i��Ԫ�ش�����Ԫ��e
	L.length++;										//���ȼ�1
	return true;									//��������ߵ���һ����˵��Ԫ���Ѿ�����ɹ�
}
bool ListDelete(SqList& L, int i, int& e){			//ɾ��������Ҫ��ԭ�б����������ʹ���ˡ�&e��
	e = L.data[i - 1];								//��e��¼��ɾ��������Ԫ��
	for (int j = i; j < L.length; j++)				//�ӵ�ǰԪ�ؿ�ʼ�����������Ԫ����ǰ����
		L.data[j - 1] = L.data[j];
	L.length-- ;									//��󳤶ȼ�ȥ1
	return true;
}

void printList(SqList L) {
	printf("��ӡ��ǰ��\n");
	for (int i = 0; i < L.length; i++) {
		printf("L.data[%d]=%d\n", i, L.data[i]);
	}
}