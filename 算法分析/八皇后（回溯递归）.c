/***********************************************************
名称：
作者：杨德轩
日期：
***********************************************************/
#include<stdio.h>
#include<stdlib.h>
#define QUEENS 8 //皇后数 

int* a; //储存每一种摆法 
int num = 0; //储存摆法数 

/*判断是否回溯*/
int judge (int* a, int n) {
	int i;
	for(i = 1; i <= n - 1; i++) {
		if((abs(a[i] - a[n]) == n - i) || (a[i] == a[n])) {
			return 0; //有冲突
		} //if
	} //for 
	return 1; //无冲突
} //judge

/*n皇后问题*/
void queens(int k) {
	int i;
    if (k > QUEENS) {
        for(i = 1; i <= QUEENS; i++) {
            printf("%d ", a[i]);
        } //for
        printf("\n");
        num++;
    } //if
    else {
        for (i = 1; i <= QUEENS; i++) {
            a[k] = i;
            if (judge(a, k) == 1) {
				queens(k + 1);
			} //if
        } //for
    } //else
} //queens

/*主函数*/
int main(int argc, char** argv) {
	a = (int*)malloc((QUEENS + 1) * sizeof(int)); //分配空间 
    printf("摆法：\n");
	queens(1);
	printf("\n共有%d种摆法\n", num);
	printf("\n");
	free(a);
	system("PAUSE");
	return 0;
} //main

