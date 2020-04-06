#pragma once
#include"NameCard.h"
#define LIST_LEN 100

typedef NameCard* LData;

typedef struct __cardlist
{
	NameCard* arr[LIST_LEN];
	int numOfData;
	int curPosition;
} CardList;

typedef CardList List;
void ListInit(List* plist); // �ʱ�ȭ
void LInsert(List* plist, LData data); // ������ ����
int LFirst(List* plist, LData* pdata); // ù ������ ����
int LNext(List* plist, LData* pdata); // �� ��° ���� ������ ����
void LRemove(List* plist); // ������ ������ ����
int LCount(List* plist); // ����� �������� �� ��ȯ