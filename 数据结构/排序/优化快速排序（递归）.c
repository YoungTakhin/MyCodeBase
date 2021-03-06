/***********************************************************
名称：优化快速排序（递归）
作者：杨得轩
日期：2018.03.15
***********************************************************/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define LENGTH 100 //数组长度
#define LIMIT 1000 //随机数范围

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

/*快速排序（递归）*/
void quickSort(int* array, int start, int end) {
	/*递归停止条件*/
    if(start >= end) {
        return;
	} //if 
	
	int mid = array[end];
    int low = start, high = end - 1;
	int tmp;
	
    while(low < high) {
        while(array[low] < mid && low < high) {
            low++;
		} //while
        while(array[high] >= mid && low < high) {
            high--;
		} //while
        tmp = array[low];
    	array[low] = array[high];
    	array[high] = tmp;
    } //while
    if(array[low] >= array[end]) {
    	tmp = array[low];
    	array[low] = array[end];
    	array[end] = tmp;
	} //if
    else {
    	low++;
	} //else
    if(low) {
    	quickSort(array, start, low - 1);
	} //if
    quickSort(array, low + 1, end);
} //quickSort

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
	
	srand((unsigned int)time(NULL)); //设置随机数种子
	generationArray(); //使用随机数生成数组
	
	printf("源"); 
	printfArray(); //打印数组
	
	quickSort(array, 0, LENGTH - 1); //快速排序（递归）
	
	printf("排序后");
	printfArray(); //打印数组
	
	system("PAUSE");
	return 0;
} //main

