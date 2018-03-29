/***********************************************************
名称：冒泡排序
作者：杨德轩
日期：2018.01.26
***********************************************************/

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#define LENGTH 20
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
	printf("数组：\n");
	for (int i = 0; i < LENGTH; i++) {
		printf("%d\t", array[i]);
	} //for

	printf("\n\n");
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
	printf("链表：\n");
	p = Head;
	while (p != NULL) {
		printf("%d\t", p->data);
		p = p->next;
	} //while

	printf("\n\n");
} //printfList

/*数组冒泡排序*/
int* bubbleSortArray(int* array) {
	int temp;

	printf("排序后");
	for (int i = 0; i < LENGTH - 1; i++) {
		for (int j = 0; j < LENGTH - 1 - i; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			} //if
		} //for
	} //for

	return array;
} //bubbleSortArray

/*链表冒泡排序*/
List* bubbleSortList(List* list) {
	int temp;
	List* t;

	printf("排序后");
	for (p = Head; p != NULL; p = p->next) {
		for (t = Head; t->next != NULL; t = t->next) {
			if (t->next->data < t->data) {
				temp = t->data;
				t->data = t->next->data;
				t->next->data = temp;
			} //if
		} //for
	} //for

	return list;
} //bubbleSortList

/*主函数*/
int main() {
	int* tempArray; //临时存放随机生成的数组
	List* tempList; //临时存放随机生成的链表

	srand((unsigned int)time(NULL)); //设置随机数种子

	tempArray = generationArray(); //生成数组
	printfArray(); //打印数组
	bubbleSortArray(tempArray); //数组冒泡排序
	printfArray(); //打印数组

	tempList = generationList(); //生成链表
	printfList(); //遍历并打印链表
	bubbleSortList(tempList); //链表冒泡排序
	printfList(); //遍历并打印链表

	free(list); //释放内存
	system("PAUSE");
	return 0;
} //main
