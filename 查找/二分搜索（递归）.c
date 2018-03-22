/***********************************************************
名称：二分搜索（递归）
作者：杨得轩
日期：2018.03.20
***********************************************************/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define LENGTH 10 //数组长度
#define LIMIT 100 //随机数范围

/*初始化定义*/
int array[LENGTH];

/*使用随机数生成数组*/
int* generationArray() {
	int i; 
	/*随机产生长度为LENGTH，数据范围在0~LIMIT的整形数组*/
	for(i = 0; i < LENGTH; i++) {
		array[i] = rand() % LIMIT; //产生随机数
	} //for

	return array;
} //generationArray

/*ð������*/
int* bubbleSort(int* array) {
	int temp;
	int i;
	int j; 
	printf("�����");
	for (i = 0; i < LENGTH - 1; i++) {
		for (j = 0; j < LENGTH - 1 - i; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			} //if
		} //for
	} //for

	return array;
} //bubbleSort

/*二分搜索（递归）*/
int binSearch(const int* array, int low, int high, int key) {
	if (low > high) {
		printf("\n不存在这个数\n\n");
		return 0;
	} //if

	int mid = low + (high - low) / 2;
	if (array[mid] > key) {
		return binSearch(array, low, mid - 1, key);
	} //if
	else if (array[mid] < key) {
		return binSearch(array, mid + 1, high, key);
	} //else if
	else {
		printf("\n这个整数在第%d个位置\n\n", mid + 1);
		return 0;
	} //else
} //binSearch

/*打印数组*/
void printfArray() {
	int i;
	printf("数组：\n");
	for(i = 0; i < LENGTH; i++) {
		printf("%d\t", array[i]);
	} //for

	printf("\n\n");
} //printfArray

/*主函数*/
int main(int argc, char** argv) {
	int i;
	int key;
	 
	srand((unsigned int)time(NULL)); //设置随机数种子
	generationArray(); //使用随机数生成数组
	
	printf("源");
	printfArray(); //打印数组
	
	bubbleSort(array); //快速排序（递归） 
	
	printf("排序后");
	printfArray(); //打印数组
	
	printf("请输入一个整数：");
	scanf("%d", &key);
	binSearch(array, 0, LENGTH, key); //二分搜索（递归） 
	
	system("PAUSE");		
	return 0;
} //main

