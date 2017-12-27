/***********************************************************
名称：折半查找
作者：杨得轩	201613446207
日期：2017.12.19
***********************************************************/
#include<iostream>
#include<time.h>
using namespace std;
#define MAXSIZE 500
#define OK 1

typedef struct {
	int key;		//关键字域
}ElemType;

typedef struct {
	ElemType *R;
	int length;
}SSTable;

int InitList_SSTable(SSTable &L) {
	L.R = new ElemType[MAXSIZE];
	if (!L.R) {
		cout << "初始化错误";
		return 0;
	}
	L.length = 0;
	return OK;
}

int Insert_SSTable(SSTable &L) {
	int tmp;
	srand((unsigned)time(NULL));
	for (int i = 1; i<MAXSIZE; i++) {
		L.R[i].key = rand();
		L.length++;
	}
	for (int i = 0; i<MAXSIZE - 1; i++) {
		for (int j = i + 1; j<MAXSIZE; j++) {
			if (L.R[i].key>L.R[j].key) {
				tmp = L.R[i].key;
				L.R[i].key = L.R[j].key;
				L.R[j].key = tmp;
			}
		}
	}
	cout << "数据：" << endl;
	for (int i = 1; i<MAXSIZE; i++) {
		cout << L.R[i].key << "\t";
	}
	return 1;
}

int Search_Bin(SSTable ST, int key) {
	/*在有序表ST中折半查找其关键字等于key的数据元素。
	若找到，则函数值为该元素在表中的位置，否则为0*/
	int low = 1, high = ST.length;		//置查找区间初值
	int  mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (key == ST.R[mid].key) { 
			return mid; 
		}		//找到待查元素
		else if (key < ST.R[mid].key) {
			high = mid - 1;
		}		//继续在前一子表进行查找
		else  low = mid + 1;		//继续在后一子表进行查找
	} //while
	return 0;		//表中不存在待查元素
} // Search_Bin

void Show_End(int result, int testkey) {
	if (result == 0) {
		cout << "未找到" << testkey << endl;
	}
	else {
		cout << "找到" << testkey << "位置为" << result << endl;
	}
}

int main() {
	SSTable ST;
	InitList_SSTable(ST);
	Insert_SSTable(ST);
	int testkey;
	cout << endl << "请输入中要查找的内容" << endl;
	cin >> testkey;
	int result;
	result = Search_Bin(ST, testkey);
	Show_End(result, testkey);
	return 0;
}
