#include <iostream>
#include<string>
using namespace std;

string s;

void cal_1(unsigned int num) {
	unsigned int count(0);

	for (; num; num >>= 1) {
		count += num & 1u;
	}

	cout << count << endl;
}

void cal_2(unsigned int num) {
	unsigned int count(0);

	for (; num; num /= 2) {
		count += (num % 2);
	}
	cout << count << endl;
}

int main() {
	unsigned int n;
	cin >> n;
	//cal_1(n);

	//cal_2(n);

	cout << (n << 3);
	return 0;
}