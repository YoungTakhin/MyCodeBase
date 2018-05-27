/***********************************************************
名称：八皇后问题（蛮力法）
作者：杨得轩	201613446207
日期：2018.5.26
***********************************************************/
#include<stdio.h>
#include<stdlib.h>

/*判断*/
int judge(int* a, int n) {
	int i, j;
	for(i = 2; i <= n; i++) {
		for(j = 1; j <= i - 1; j++) {
			if ((a[i] == a[j]) || (abs(a[i] - a[j]) == i - j)) {
				return 0; //有冲突
			} //if
		} //for
	} //for
	return 1; //无冲突
} //judge

/*八皇后*/
void queens() {
    int a[9];
    int num = 0; //记录摆放种类
    int i;
    printf("摆法：\n");
	for(a[1] = 1; a[1] <= 8; a[1]++) {
		for(a[2] = 1; a[2] <= 8; a[2]++) {
			for(a[3] = 1; a[3] <= 8; a[3]++) {
				for(a[4] = 1; a[4] <= 8; a[4]++) {
					for(a[5] = 1; a[5] <= 8; a[5]++) {
						for(a[6] = 1; a[6] <= 8; a[6]++) {
							for(a[7] = 1; a[7] <= 8; a[7]++) {
								for(a[8] = 1; a[8] <= 8; a[8]++) {
									if(!judge(a, 8)) {
										continue;
									} //if
									else {
										for(i = 1; i <= 8; i++) {
											printf("%d ", a[i]);
										} //for
										printf("\n");
										num++;
									} //else
								} //for
							} //for
						} //for
					} //for
				} //for
 			} //for
		} //for
	} //for
	printf("\n共有%d种摆法\n", num);
} //queens

/*主函数*/
int main(int argc, char** argv) {
	queens();
	printf("\n");
	system("PAUSE");
	return 0;
} //main

