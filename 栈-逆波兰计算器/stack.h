#ifndef _STACK_H_
#define _STACK_H_

#include <stdbool.h>

#define MAX 10
typedef struct stack
{
	int date[MAX];
	int top;
}Stack;

/* ����������һ��ջ */
/* ǰ���������޲������� */
/* ���������� ����ָ�򴴽�ջ��ָ�� */
Stack * stack_creat();

/* �������ж�ջ�Ƿ�Ϊ�� */
/* ǰ��������pstack��ָ��ջ��ָ�� */
/* ���������� ��ջΪ�շ���true�����򷵻�false */
bool stack_is_empty(Stack * pstack);

/* ������������ջ */
/* ǰ��������pstackָ��һ��ջ��n��Ҫ��ջ������ */
/* ������������ջ�ɹ�����true�����򷵻�false */
bool stack_enter(Stack * pstack, int n);

/* ���������ݳ�ջ */
/* ǰ��������pstackָ��һ��ջ */
/* �������������س�ջ������ */
int stack_out(Stack * pstack);

/* �������鿴ջ������ */
/* ǰ��������pstackָ��һ��ջ */
/* ��������������ջ������ */
int stack_top(Stack * pstack);

/* ��������ӡջ������ */
/* ǰ��������pstackָ��һ��ջ */
/* ���������� ��ӡջ������ */
void stack_print(Stack * pstack);

#endif
