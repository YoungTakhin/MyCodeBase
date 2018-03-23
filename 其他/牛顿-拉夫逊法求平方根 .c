/***********************************************************
名称：牛顿-拉夫逊法求平方根
作者：杨得轩
日期：2018.03.23
***********************************************************/
#include<stdio.h>
#include<stdlib.h>
#define N 100

/*牛顿-拉夫逊法*/
void newtonRaphsonMethod() {
	double a;
	printf("请输入一个正数：\n");
	scanf("%lf", &a);
    double x0, x1;
    int i;
    x0 = a / 2; //设a/2为平方根的初值
    x1 = (x0 + a / x0) / 2;
    for(i = 0; i < N; i++) {
		x0 = x1;
		x1 = (x0 + a / x0) / 2;
	} //for
    printf("\n平方根：\n√%g=%.10lf\n\n", a, x1);
} //newtonRaphsonMethod

/*主函数*/
int main(int argc, char** argv) {
	newtonRaphsonMethod();
	system("PAUSE");
	return 0;
} //main

