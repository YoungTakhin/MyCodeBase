/***********************************************************
名称：背包问题 
作者：杨得轩
日期：2018.03.29
***********************************************************/
#include<stdio.h>
#include<time.h>
#define N 10
#define PRICE_LIMIT 100
#define WEIGHT_LIMIT 10

typedef struct Things{
	int num;
	int price;
	int weight;
}things;
things a[N];

void getThings(things* a){
	int i;
	printf("物品\t价格\t重量\n");
	for(i=0;i<N;i++){
		a[i].num=i+1;
		a[i].price=rand()%PRICE_LIMIT;
		a[i].weight=rand()%WEIGHT_LIMIT;
		printf("%d:\t%d\t%d\n",a[i].num,a[i].price,a[i].weight);
	}
}

void packet(int pack, things* a) {
	
}

/*主函数*/
int main(int argc, char** argv) {
	srand((unsigned int)time(NULL)); //设置随机数种子
	getThings(a);


	return 0;
} //main

