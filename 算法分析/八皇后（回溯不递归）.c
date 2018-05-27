/***********************************************************
名称：八皇后问题（回溯不递归） 
作者：杨得轩	201613446207
日期：2018.5.26
***********************************************************/
#include<stdio.h>
#include<stdlib.h>

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

/*八皇后*/
void queens() {
	int a[9];
	int num = 0;
	int i;
    printf("摆法：\n");
	for(a[1] = 1; a[1] <= 8; a[1]++) {
		for(a[2] = 1; a[2] <= 8; a[2]++) {
 			if (!judge(a, 2)) {
				continue;
			} //if
			for(a[3] = 1; a[3] <= 8; a[3]++) {
				if (!judge(a, 3)) {
					continue;
				} //if
 				for(a[4] = 1; a[4] <= 8; a[4]++) {
					if (!judge(a, 4)) {
						continue;
					} //if
					for(a[5] = 1; a[5] <= 8; a[5]++) {
						if (!judge(a, 5)) {
							continue;
						} //if
						for(a[6] = 1; a[6] <= 8; a[6]++) {
							if (!judge(a, 6)) {
								continue;
							} //if
							for(a[7] = 1; a[7] <= 8; a[7]++) {
								if (!judge(a, 7)) {
									continue;
								} //if
								for(a[8] = 1; a[8] <= 8; a[8]++) {
									if (!judge(a, 8)) {
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

