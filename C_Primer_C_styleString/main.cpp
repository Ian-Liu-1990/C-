#include<iostream>
#include<vector>
#include"pratice1.h"
#define _CRT_SECURE_NO_WARNINGS
using namespace std;



int main() {
	char a[] = "Hello World";
	string s1 = "Hello World Hello World Hello World";

	char b[100];

	strcpy_s(b, s1.c_str());

	vector<int>v{1, 1, 2, 2, 3, 3, 5, 6, 7};

	vector<int>::iterator it = v.begin() + 1; // 0
	int index = 0;
	for (; it != v.end(); it++) {
		if (*(v.begin() + index) != (*it )) {
			*(v.begin() + (++index)) = *it;
		}
	}
	++index;

	cout << index;

	int arr[3][4] = { {0, 1, 2, 3},
		{ 4, 5, 6, 7},
		{  8, 9, 10, 11}, };

	int  (*arrPtr)[4] = arr;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << *(*(arrPtr + i) + j) << endl;
		}
	}

	for (auto &i : arr) {
		for (auto &j : i) {
			
		}
	}

	test_Strtok();

	return 0;
}