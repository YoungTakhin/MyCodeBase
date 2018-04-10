/***********************************************************
名称：分治法求最大子段和
作者：杨得轩
日期：2018.04.10
***********************************************************/
#include<stdio.h>
#include<stdlib.h>
#define N 10
#define LIMIT 10

int array[N]; //初始化数组 

int* generationArray() {
	int i;
	/*随机产生长度为LENGTH，数据范围在0~LIMIT的整形数组*/
	for (i = 0; i < N; i++) {
		array[i] = (rand() % LIMIT) - (LIMIT / 2); //产生随机数
	} //for

	return array;
} //generationArray

/*打印数组*/
void printfArray() {
	int i;
	printf("\n数组：\n");
	for (i = 0; i < N; i++) {
		printf("%d\t", array[i]);
	} //for

	printf("\n");
} //printfArray

/*二元最大值*/
int max2(int a, int b) {
	return a < b ? b : a;
} //max2

/*三元最大值*/
int max3(int a, int b, int c) {
	return a < (b < c ? c : b) ? (b < c ? c : b) : a;
} //max3

/*分治法求最大子段和*/
int maxSubsectionSum(int* a, int left, int right) {

	/*递归出口*/
	if(left == right) {
        return max2(a[left], 0);
	} //if

    int mid = (left + right) / 2;
    int leftMax = maxSubsectionSum(a, left, mid); //求左边最大子段和
    int rightMax = maxSubsectionSum(a, mid + 1, right); //求右边最大子段和

    /*求中间最大子段和*/
    int i;
    int sum;

	sum = 0;
    int tmpLeftMax = 0;
    for(i = mid; i >= left; i--) {
        sum += a[i];
        if(sum > tmpLeftMax) {
            tmpLeftMax = sum;
		} //if
    } //for

    sum = 0;
    int tmpRightMax = 0;
    for(i = mid + 1; i <= right; i++) {
        sum += a[i];
        if(sum > tmpRightMax) {
            tmpRightMax = sum;
		} //if
    } //for

    int max = max3(leftMax, rightMax, tmpLeftMax + tmpRightMax);
    return max;
} //maxSubsectionSum

/*主函数*/
int main(int argc, char** argv) {
	srand((unsigned int)time(NULL)); //设置随机数种子

	generationArray(); //随机数生成数组
	printfArray(); //打印数组
	printf("\n最大子段和：\n%d\t",maxSubsectionSum(array, 0, N - 1)); //分治法求最大子段和
	printf("\n\n");

	system("PAUSE");
	return 0;
} //main

