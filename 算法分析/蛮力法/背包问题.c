/***********************************************************
名称：背包问题
作者：杨得轩
日期：2018.03.29
***********************************************************/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<malloc.h>
#include<math.h>

#define N 5 //物品总数
#define PRICE_LIMIT 50 //价格范围
#define WEIGHT_LIMIT 20 //重量范围
#define WEIGHT_OF_PACKET 25 //背包总重量
#define NUM_OF_SUBBSET pow(2, N) //子集总数

/*物品结构体*/
typedef struct Things {
	int num;
	int price;
	int weight;
}goods;
goods a[N];

/*总数结构体*/
typedef struct Sum {
	int priceSum;
	int weightSum;
}sum;
sum* p;

int* __bool; //记录每种拿法

/*置零*/
void setZero(sum* p) {
	int j;
	
	for(j = 0; j < NUM_OF_SUBBSET; j++) {
		p[j].weightSum = 0;
		p[j].priceSum = 0;
		__bool[j] = 0;
	} //for
	
	return ;
} //setZero

/*二进制法求子集*/
void getSubset(goods* a) {
	int i, j;
	int k = 0; //总数结构体下标
	setZero(p); //初始化
	
	printf("\n每种拿法：\n");
	
	for(i = 0; i < (1 << N); ++i) {
		
		int tmpPrice = 0;
		int tmpWeight = 0;
		
		printf("第%d种： \t", i + 1);
		
		for(j = 0; j < N; ++j) {
			if(i & (1 << j)) {
				printf("%d\t", a[j].num);
				
				tmpWeight = tmpWeight + a[j].weight; //统计该种情况下总重量
				tmpPrice = tmpPrice + a[j].price; //统计该种情况下总价格
				p[k].weightSum = tmpWeight; //赋值
				p[k].priceSum = tmpPrice; //赋值
				__bool[k] = decToBin(k); //赋值
				
			} //if
		} //for
		printf("\n");
		k++;
	} //for
	
	return ;
} //getSubset

/*使用随机数为物品重量和价格随机赋值*/
void getGoods(goods* a) {
	int i;
	
	printf("物品\t价格\t重量\n");
	
	for(i = 0; i < N; i++) {
		a[i].num = i + 1;
		a[i].price = rand() % PRICE_LIMIT + 1;
		a[i].weight = rand() % WEIGHT_LIMIT + 1;
		printf("%d:\t%d\t%d\n", a[i].num, a[i].price, a[i].weight);
	} //for
	
	return ;
} //getGoods

/*穷举每种情况物品的重量和价格*/
void printGoods(sum* p) {
	int i;
	
	printf("\n\n重量：\n");
	for(i = 0; i < NUM_OF_SUBBSET; i++) {
		printf("%d\t", p[i].weightSum);
	} //for
	
	printf("\n\n价格：\n");
	for(i = 0; i < NUM_OF_SUBBSET; i++) {
		printf("%d\t", p[i].priceSum);
	} //for
	
	printf("\n\n编号：\n");
	for(i = 0; i < NUM_OF_SUBBSET; i++) {
		printf("%0#5d\t", decToBin(i));
	} //for
	
	printf("\n");
	
	return ;
} //printGoods

/*十进制转换二进制*/
int decToBin(int n) {
	int result = 0;
	int k = 1;
	int temp = n;
	int i;
	
	while(temp) {
		i = temp % 2;
		result = k * i + result;
		k = k * 10;
		temp = temp / 2;
	} //while
	
	return result;
} //decToBin

/*寻找最优解*/
void find(sum* p) {
	int i;
	int j;
	int tmp = 0;
	
	for(i = 1; i < NUM_OF_SUBBSET; i++) {
		if(p[i].priceSum >= p[tmp].priceSum && p[i].weightSum <= WEIGHT_OF_PACKET) {
			tmp = i;
		} //if
	} //for
	
	printf("\n最优价格：%d\n重量：%d\n物品：%d\n\n", p[tmp].priceSum, p[tmp].weightSum, decToBin(tmp));
	
	return ;
} //find

/*主函数*/
int main(int argc, char** argv) {
	p = (sum*)malloc(NUM_OF_SUBBSET * sizeof(struct Sum)); //分配空间
	__bool = (int*)malloc(NUM_OF_SUBBSET * sizeof(int)); //分配空间
	
	srand((unsigned int)time(NULL)); //设置随机数种子
	
	getGoods(a); //为物品属性赋值
	getSubset(a); //求子集
	printGoods(p); //打印所有情况
	find(p); //寻找最优解
	
	free(p);
	free(__bool);
	system("PAUSE");
	return 0;
} //main

