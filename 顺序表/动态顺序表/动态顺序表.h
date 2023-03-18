#pragma once
#define InitSize 10							//定义默认长度				
#include<stdio.h>
typedef struct {																										//如果是动态数组，使用该属性
	int *data;	
	int MaxSize;
	int length;								
}SqList;


//初始化
void InitList(SqList& L);
//插入数据
bool ListInsert(SqList& L, int i, int e);
//删除数据
bool ListDelete(SqList& L, int i, int& e);
//打印数据
void printList(SqList L);