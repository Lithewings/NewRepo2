#include "������.h"
#include <malloc.h>
bool InitList(LinkList& L)
{
	L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
		return false;	//������ռ�ʧ�ܺ�ͷָ��ָ����ڴ棬����Ϊ��
	L->next = NULL;		//L���¸����ָ����ʱΪ��
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
		return false;							//�ж�i�ĺϷ��ԣ���������ݲ�������ͷ���
		LNode* p;								//����һ��ָ�������ָ��
		int j = 0;
		p = L;									//���ָ������ʱָ��ͷ���
	while (p != NULL && j < i - 1) {			//������Ϊ�ձ��Ҳ���Ľ��λ���ǲ�ͷ���֮��
		p = p->next;							//p��ɨ���㣬ֱ������������Ľ��λ��
		j++;
	}	
	if (p == NULL)								//p����ָ���˿ս�㣬���Ϸ�
	return false;
												//���ˣ�pָ���ҵ��˽��λ��
	LNode* s = (LNode*)malloc(sizeof(LNode));	//�����½ṹ��ָ��s��ָ���´����Ŀս��
	s->data = e;								//�ṹ��ָ����ʵ������data����Ԫ�أ�Ϊ�丳ֵe
	s-> next = p->next;							//s����һ������p����һ��������Ľ��������ȷ���									
	p->next = s;
	return true;								//p����һ������s����һ��������Ľ��������ȷǰ��
}
