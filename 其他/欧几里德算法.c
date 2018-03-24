/***********************************************************
名称：欧几里德算法
作者：杨德轩
日期：2018.03.24
***********************************************************/
#include<stdio.h>

/*欧几里德算法*/
int euclidean(int a, int b) {
	int t = 1;
	
	while(t) {
	t = a % b;
	a = b;
	b = t;
	} //while
	
	return a;
} //euclidean

/*主函数*/
int main(int argc, char** argv) {
	int a, b;
	int GCD;
	printf("请输入两个正整数：\n"); 
	scanf("%d %d", &a, &b);
	GCD = euclidean(a, b); //欧几里德算法 
	printf("\n%d和%d最大公约数是%d", a, b, GCD);

	return 0;
} //main

