#pragma once
#define MaxSize 10							//定义最大长度				
#include<stdio.h>
typedef struct {							//typedef：自定义数据类型																				//如果是动态数组，使用该属性
	int data[MaxSize];						//定义数组，用来存放数据元素
	int length;								//顺序表的当前长度
}SqList;


//初始化
void InitList(SqList& L);
//插入数据
bool ListInsert(SqList& L, int i, int e);
//删除数据
bool ListDelete(SqList& L, int i, int& e);
//打印数据
void printList(SqList L);