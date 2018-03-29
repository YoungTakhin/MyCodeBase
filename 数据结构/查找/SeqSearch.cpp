/***********************************************************
名称：设置监视哨的顺序查找
作者：杨得轩	201613446207
日期：2017.12.19
***********************************************************/
#include<iostream>
#include<time.h>
using namespace std;
#define MAXSIZE 500
#define OK 1;

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


int Search_Seq(SSTable ST, int key) {
	/*在顺序表ST中顺序查找其关键字等于key的数据元素。
	若找到，则函数值为该元素在表中的位置，否则为0*/
	int i;
	ST.R[0].key = key;		//“哨兵”
	for (i = ST.length; ST.R[i].key != key; --i);		//从后往前找
	return i;
}// Search_Seq

void Show_End(int result, int testkey) {
	if (result == 0){
		cout << "未找到" << testkey << endl;
	}
	else{
		cout << "找到" << testkey << "位置为" << result << endl;
	}
}

void main() {
	int testkey;
	SSTable ST;
	InitList_SSTable(ST);
	Insert_SSTable(ST);
	cout << endl << "请输入中要查找的内容" << endl;
	cin >> testkey;
	int result;
	result = Search_Seq(ST, testkey);
	Show_End(result, testkey);
}
