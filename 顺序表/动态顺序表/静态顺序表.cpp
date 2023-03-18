#include "静态顺序表.h"

void InitList(SqList& L) {
	for (int i = 0; i < MaxSize; i++)	
	L.data[i] = 0;									//所有数据元素的都设定化为0
L.length = 0;										//当前数组无元素，设当前长度为0
}

bool ListInsert(SqList& L, int i, int e) {			//在第i个元素的位置插入元素e
	if (i<1 || i>L.length + 1)
		return false;								//如果要插入的位置溢出，报错
	if (L.length >= MaxSize)
		return false;								//当前存储空间已满，不能继续插入元素，报错
	for (int j = L.length; j >= i; j--)
		L.data[j] = L.data[j - 1];					//将第i个元素及之后的元素后移覆盖		
	L.data[i - 1] = e;								//在第i个元素处放入元素e
	L.length++;										//长度加1
	return true;									//如果代码走到这一步，说明元素已经插入成功
}
bool ListDelete(SqList& L, int i, int& e){			//删除操作需要对原有表操作，这里使用了“&e”
	e = L.data[i - 1];								//用e记录下删除的数据元素
	for (int j = i; j < L.length; j++)				//从当前元素开始，后面的所有元素向前覆盖
		L.data[j - 1] = L.data[j];
	L.length-- ;									//最大长度减去1
	return true;
}

void printList(SqList L) {
	printf("打印当前表\n");
	for (int i = 0; i < L.length; i++) {
		printf("L.data[%d]=%d\n", i, L.data[i]);
	}
}