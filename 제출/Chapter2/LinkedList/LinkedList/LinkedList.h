#pragma once
#include<stdio.h>
#include<stdlib.h>
using namespace std;

typedef struct _node
{
	int data; //�����͸� ���� ����
	struct _node* next; //������ ����
}Node;


void LInsert(Node** head, Node** tail, int Data);
void LRead(Node* head);
int LRemove(Node* head, Node* tail);