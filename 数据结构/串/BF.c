/***********************************************************
名称：BF算法
作者：杨德轩
日期：2017.10.24
***********************************************************/

# include "stdio.h"
# include "string.h"
# define N 10000

typedef struct STRING {
	char array[N];
	int length;
}SString;

int BF(SString S, SString T) {
	int i = 1;
	int j = 1;
	while (i <= S.length && j <= T.length) {
		if (S.array[i - 1] == T.array[j - 1]) {
			++i;
			++j;
		}
		else {
			i = i - j + 2;
			j = 1;
		}
	}
	if (j > T.length) {
		return i - T.length;
	}
	else {
		return 0;
	}
}

int main(int argc, char** argv) {
	SString S;
	SString T;
	printf("请输入一个长度在10000以内的主串：");
	gets(S.array);
	printf("请输入一个长度在10000以内子串：");
	gets(T.array);
	S.length = strlen(S.array);
	T.length = strlen(T.array);
	if (BF(S, T) != 0) {
		printf("子串在主串中的位置是：%d\n", BF(S, T));
	}
	else {
		printf("这个主串中不存在这个子串\n");
	}
	return 0;
}

