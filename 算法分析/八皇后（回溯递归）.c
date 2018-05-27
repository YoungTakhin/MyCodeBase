/***********************************************************
名称：八皇后问题（回溯递归） 
作者：杨得轩	201613446207 
日期：2018.5.27 
***********************************************************/
#include<stdio.h>
#include<stdlib.h>
#define QUEENS 8 //皇后数

int* a; //储存每一种摆法
int num = 0; //储存摆法数
int ctrl = 0; //用于控制是否画出摆法图 

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
	int j; //用于画图
	
    if (k > QUEENS) {
    	printf("第%d种摆法：\n", num + 1);
    	
        for(i = 1; i <= QUEENS; i++) {
        	
            if(ctrl == 1) {
          		/*画出摆法图*/
           		for(j = 1; j <= QUEENS; j++) {
            		if(j == a[i]) {
            			printf("Q ");
					} //if
					else {
						printf("+ ");
					} //else
				} //for
				printf("\n");
			} //if
			
        	else {
        		/*写出结果*/
            	printf("%d ", a[i]);
        	} //else
			
        } //for
        printf("\n\n");
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
	
	printf("是否画出摆法图？（1--是，其它--否）\t");
	scanf("%d", &ctrl);
	
    printf("\n摆法：\n\n");
	queens(1);
	printf("\n共有%d种摆法\n", num);
	printf("\n");
	
	free(a);
	system("PAUSE");
	
	return 0;
} //main

