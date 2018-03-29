/***********************************************************
名称：折半插入排序
作者：杨得轩
日期：2018.03.15
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

/*打印数组*/
void printfArray() {
	int i;
	printf("数组：\n");
	for(i = 0; i < LENGTH; i++) {
		printf("%d\t", array[i]);
	} //for

	printf("\n\n");
} //printfArray

/*折半插入排序*/
void binSort(int* array) {
	int i, j;
	int low, high, mid;
    int temp;

    for(i = 1; i < LENGTH; i++) {
        low = 0;
        high = i - 1;
        temp = array[i];
        
        while(low <= high) {
            mid = (low + high) / 2;
            
            if(array[mid] > temp) {
                high = mid - 1;
            } //if
			else {
                low = mid + 1;
            } //else
        } //while

        for(j = i; j > low; j--) {
            array[j] = array[j - 1];
        } //for
        
        array[low] = temp;
    } //for
} //binSort

/*主函数*/
int main(int argc, char** argv) {
	int i;
	
	generationArray();
	
	printf("源");
	printfArray(); //打印数组
	
	binSort(array); //折半插入排序
	
	printf("排序后");
	printfArray(); //打印数组
	
	system("PAUSE");
	return 0;
} //main

