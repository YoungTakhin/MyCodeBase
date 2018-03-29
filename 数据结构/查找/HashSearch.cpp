/***********************************************************
名称：哈希表的查找
作者：杨得轩	201613446207
日期：2017.12.19
***********************************************************/
#include<iostream>
#include<time.h>
using namespace std;

//- - - - -开放地址法哈希表的存储表示- - - - -
#define m 16		//哈希表的表长
#define NULLKEY 0		//单元为空的标记

struct HashTable {
	int key;		//关键字项
};

int H(int key) {
	int result;
	result = key % 13;
	return result;
}

int SearchHash(HashTable HT[], int key) {
	//在哈希表HT中查找关键字为key的元素，若查找成功，返回哈希表的单元标号，否则返回-1 
	int H0 = H(key);		//根据哈希函数H（key）计算哈希地址
	int Hi;
	if (HT[H0].key == NULLKEY) return -1;		//若单元H0为空，则所查元素不存在
	else if (HT[H0].key == key) return H0;		//若单元H0中元素的关键字为key，则查找成功
	else {
		for (int i = 1; i<m; ++i) {
			Hi = (H0 + i) % m;		//按照线性探测法计算下一个哈希地址Hi
			if (HT[Hi].key == NULLKEY) return -1;		//若单元Hi为空，则所查元素不存在
			else if (HT[Hi].key == key) return Hi;		//若单元Hi中元素的关键字为key，则查找成功
		}//for
		return -1;
	}//else
}//SearchHash

void main() {
	int result;
	int a[m];
	int key;
	srand((unsigned)time(NULL));
	for (int j = 0; j < m; j++) {
		a[j] = rand();
	}
	HashTable HT[m];
	for (int i = 0; i<16; i++) {
		HT[i].key = a[i];
	}
	cout << "哈希表：" << endl;
	for (int j = 1; j < m; j++) {
		cout << a[j] << "\t";
	}
	cout << endl << "请输入中要查找的内容" << endl;
	cin >> key;
	result = SearchHash(HT, key);
	if (result != -1) {
		cout << "在第" << result << "位置找到" << endl;
	}
	else {
		cout << "未找到" << endl;
	}
}
