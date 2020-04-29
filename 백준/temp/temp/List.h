#pragma once
#include <iostream>
using namespace std;

typedef int Data;

typedef struct _node
{
	Data data;
	Node* next;
}Node;

typedef struct LIST
{
	Node* head;
	Node* cur;
	Node * before;
	int numOfData;
}List;

void ListInit(List* plist); // �ʱ�ȭ

template <typename Type>
void LInsert(List* plist, Type data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));

	newNode->data = data;

	newNode->next = plist->head->next;

	plist->head->next = newNode;

	(plist->numOfData)++;
}


template <typename Type>
int LFirst(List* plist, Type* pdata)
{
	if (plist->head->next == NULL)
		return FALSE;
	plist->before = plist->head;
	plist->cur = plist->head->next;
	*pdata = plist->cur->data;
	return TRUE;
}

template <typename Type>
int LNext(List* plist, Type* pdata)
{
	if (plist->cur->next == NULL)
		return FALSE;
	plist->before = plist->cur;
	plist->cur = plist->cur->next;
	*pdata = plist->cur->data;
	return TRUE;
}

Data LRemove(List* plist); // ������ ������ ����
int LCount(List* plist); // ����� �������� �� ��ȯ