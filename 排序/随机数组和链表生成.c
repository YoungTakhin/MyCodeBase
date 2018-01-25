/***********************************************************
名称：随机数组和链表生成
作者：杨德轩
日期：2018.01.25
***********************************************************/

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#define LENGTH 100
#define LIMIT 100

int array[LENGTH]; //定义数组

typedef struct Node{
	int data; //数据域
	struct Node* next; //指针域
}List; //定义链表结点
List* Head = NULL; //初始化头结点
List* Tail = NULL; //初始化尾结点
List* list; //用于初始化链表
List* p; //用于遍历链表
int j = 1; //计算链表长度（测试用）

int main(int argc, char** argv) {
	/*设置随机数种子*/
	srand((unsigned int)time(NULL));

	/*随机产生长度为LENGTH，数据范围在0~LIMIT的整形数组*/
	for (int i = 0; i < LENGTH; i++) {
		array[i] = rand() % LIMIT; //产生随机数
	} //for

	/*打印数组*/
	printf("数组：\n");
	for (int i = 0; i < LENGTH; i++) {
		printf("%d\t", array[i]);
	} //for

	/*随机产生长度为LENGTH，数据域范围在0~LIMIT的链表*/
	printf("\n\n链表：\n");
	for(int i = 0; i < LENGTH; i++) {
		list = (List*)malloc(sizeof(List));
		list->data = rand() % LIMIT; //产生随机数
		if (Head == NULL) {
			Head = list;
		} //if
		else {
			Tail->next = list;
		} //else
		list->next = NULL;
		Tail = list;
	} //for

	/*遍历并打印链表*/
	p = Head;
	while(p!= NULL) {
		printf("%d %d\t", p->data, j); //j计算链表长度（测试用）
		p = p->next;
		j++; //计算链表长度（测试用）
	} //while

	free(list); //释放内存
	printf("\n");

	system("PAUSE");
	return 0;
}
