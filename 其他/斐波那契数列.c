/***********************************************************
名称：斐波那契数列
作者：杨德轩
日期：2018.03.23
***********************************************************/
#include<stdio.h>
#include<stdlib.h> 

/*斐波那契数列 */
unsigned long long fibonacci(int n) {
    if(n < 2){
		return 1;
	} //if
    unsigned long long a = 1;
	unsigned long long b = 1;
	
	int i;
    for(i = 2; i < n; i++){
        unsigned long long c = a + b;
        a = b;
		b = c;
    } //for
    return b;
} //fibonacci

/*主函数*/
int main(int argc, char** argv) {
	unsigned long long n;
	int i;
	printf("请输入1~92之间的整数：\n");
	scanf("%d", &n);
	printf("\n斐波那契数列：\n");
	printf("第n项\t  第n项的值\n");
	for(i = 1; i <= n; i++) {
		printf("%d\t  %lld\n", i, fibonacci(i)); //斐波那契数列 
	} //for

	system("PAUSE");
	return 0;
} //main

