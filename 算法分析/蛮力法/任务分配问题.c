/***********************************************************
名称：任务分配问题
作者：杨得轩
日期：2018.04.01
***********************************************************/
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#define N 5

int cost[N][N]; //保存每个人每个任务的花销
int person[N]; //临时储存员工编号
int minCost = INT_MAX; //最小花销
int presentCost = 0; //当前花销

bool judge(int tmp);

/*使用随机数赋值*/
void getCost(int cost[N][N]) {
	int i, j;

	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			cost[i][j] = rand() % 9 + 1;
		} //for
	} //for

	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			printf("%d ", cost[i][j]);
		} //for
		printf("\n");
	} //for
} //getCost

/*任务分配*/
void assignment(int tmp) {
	int i;

	/*为第tmp个人找工作*/
	if(tmp == N) {
		if(presentCost < minCost) {
			minCost = presentCost;
		} //if

		return ;
	} //if

	for(i = 0; i < N; i++) {
		person[tmp] = i; //为第tmp个人分配第i个工作
		presentCost += cost[tmp][i];
		if(judge(tmp)) {
			assignment(tmp + 1);
		} //if
		presentCost -= cost[tmp][i];
	} //for
} //assignment

/*判断*/
bool judge(int tmp) {
    int i;

    for(i = 0; i < tmp; i++) {
        if(person[i] == person[tmp]) {
			return false;
		} //if
	} //for
	return true;
} //judge

/*主函数*/
int main(int argc, char** argv) {
	srand((unsigned int)time(NULL)); //设置随机数种子

	printf("每个人分配每个任务的花销：\n");
	getCost(cost); //随机生成每个人每个任务的花销

	assignment(0); //任务分配

	printf("\n最优花销：\n");
	printf("%d\n\n", minCost); //打印最优花销

	system("PAUSE");
	return 0;
} //main

