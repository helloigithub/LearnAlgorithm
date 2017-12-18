/* list.h -- ���������͵�ͷ�ļ� */
#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>	/* C99���� */

/* һ�����Ͷ��� */

typedef struct node
{
	int Num;
	struct node* Next;
}Node;

typedef struct node* List;

/* ����ԭ�� */

/*  ��ʼ������ */
void InitializeList(List * plist);

/* ��������Ƿ�Ϊ�� */
bool ListIsEmpty(const List * plist);

/* ȷ�������Ƿ����� */
bool ListIsFull(const List * plist);

/* ȷ�������е����� */
unsigned int ListCount(const List * plist);

/* ȷ���Ƿ񵽽�β */
bool ListIsLast(const List * plist, Node * pnode);

/* ����� */
bool AddList(List * plist, int item);

/* ɾ���� */
void DelList(List * plist, int item);

/* ������ */
Node * FindList(List *plist, int item);

/* ����ǰһ�� */
Node * FindPrevious(List * plist, int item);

/* ������ */
bool InsertList(List * plist, int item, int position);

#endif