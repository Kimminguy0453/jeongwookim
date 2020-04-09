#pragma once
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
#define LIST_LEN 100
typedef int LData;
typedef struct _node
{
	LData data;
	struct _node * next;
} Node;
typedef struct _linkedList
{
	Node * head;
	Node * cur;
	Node * before;
	int numOfData;
	//int(*comp)(LData d1, LData d2);
} LinkedList;
typedef LinkedList List;
void ListInit(List* plist); // �ʱ�ȭ
void LInsert(List* plist, LData data); // ������ ����
int LFirst(List* plist, LData* pdata); // ù ������ ����
int LNext(List* plist, LData* pdata); // �� ��° ���� ������ ����
LData LRemove(List* plist); // ������ ������ ����
int LCount(List* plist); // ����� �������� �� ��ȯ