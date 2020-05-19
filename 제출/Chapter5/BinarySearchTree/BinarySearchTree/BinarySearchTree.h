#ifndef __BINARY_SEARCH_TREE_H__
#define __BINARY_SEARCH_TREE_H__

#include "BinaryTree.h"
#include<iostream>
using namespace std;

typedef BTData	BSTData;

// BST�� ���� �� �ʱ�ȭ
void BSTMakeAndInit(BTreeNode ** pRoot);

// ��忡 ����� ������ ��ȯ
BSTData BSTGetNodeData(BTreeNode * bst);

// BST�� ������� ������ ����(����� �������� ����)
void BSTInsert(BTreeNode ** pRoot, BSTData data);

// BST�� ������� ������ Ž��
BTreeNode * BSTSearch(BTreeNode * bst, BSTData target);

void DeleteNode(BTreeNode ** bst);

#endif