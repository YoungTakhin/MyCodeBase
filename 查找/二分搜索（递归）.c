/***********************************************************
名称：二分搜索（递归）
作者：杨得轩
日期：2018.03.20
***********************************************************/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define LENGTH 100 //数组长度
#define LIMIT 10000 //随机数范围

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

/*快速排序*/
void quickSort(int* array, int start, int end) {
	/*递归停止条件*/
    if(start >= end) {
        return;
	} //if 
	
	int mid = array[end];
    int low = start, high = end - 1;
	int temp;
	
    while(low < high) {
        while(array[low] < mid && low < high) {
            low++;
		} //while
        while(array[high] >= mid && low < high) {
            high--;
		} //while
        temp = array[low];
    	array[low] = array[high];
    	array[high] = temp;
    } //while
    if(array[low] >= array[end]) {
    	temp = array[low];
    	array[low] = array[end];
    	array[end] = temp;
	} //if
    else {
    	low++;
	} //else
    if(low) {
    	quickSort(array, start, low - 1);
	} //if
    quickSort(array, low + 1, end);
} //quickSort

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
	
	quickSort(array, 0, LENGTH - 1); //快速排序（递归） 
	
	printf("排序后");
	printfArray(); //打印数组
	
	printf("请输入一个整数：");
	scanf("%d", &key);
	binSearch(array, 0, LENGTH, key); //二分搜索（递归） 
	
	system("PAUSE");		
	return 0;
} //main

