/***********************************************************
名称：随机数组和链表生成
作者：杨德轩
日期：2018.01.26
***********************************************************/

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#define LENGTH 100
#define LIMIT 100

  /*初始化*/
int array[LENGTH]; //定义数组
typedef struct Node {
	int data; //数据域
	struct Node* next; //指针域
}List; //定义链表结点
List* Head = NULL; //初始化头结点
List* Tail = NULL; //初始化尾结点
List* list; //用于初始化链表
List* p; //用于遍历链表

/*生成数组*/
int* generationArray() {
	/*随机产生长度为LENGTH，数据范围在0~LIMIT的整形数组*/
	for (int i = 0; i < LENGTH; i++) {
		array[i] = rand() % LIMIT; //产生随机数
	} //for

	return array;
} //generationArray

/*打印数组*/
void printfArray() {
	printf("\n数组：\n");
	for (int i = 0; i < LENGTH; i++) {
		printf("%d\t", array[i]);
	} //for

	printf("\n");
} //printfArray

/*生成链表*/
List* generationList() {
	/*随机产生长度为LENGTH，数据域范围在0~LIMIT的链表*/
	for (int i = 0; i < LENGTH; i++) {
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

	return list;
} //generationList

/*遍历并打印链表*/
void printfList() {
	printf("\n链表：\n");
	p = Head;
	while (p != NULL) {
		printf("%d\t", p->data);
		p = p->next;
	} //while

	printf("\n");
} //printfList

/*主函数*/
int main() {
	srand((unsigned int)time(NULL)); //设置随机数种子
	generationArray(); //生成数组
	printfArray(); //打印数组
	generationList(); //生成链表
	printfList(); //遍历并打印链表
	free(list); //释放内存
	system("PAUSE");
	return 0;
} //main
