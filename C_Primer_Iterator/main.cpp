#include<iostream>
#include<vector>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

class binarySearch {
public:
	binarySearch() {};
	void get(int i) {
		v.push_back(i);
	};

	bool compare(int i, int j) {
		return i < j;
	}

	int find(int i) {
		sort(v.begin(), v.end(), compare);

		auto beg = v.begin(), end = v.end();
		auto mid = v.begin() + (v.end() - v.begin()) / 2; // ���n�[���A�Ҧb"�_�l��m + �첾�Z��"

		while (mid != v.end() && *mid != i) {  // while(left[0] <= right[N-1]) �����@N�Ӥ���
			if (*mid < i) {
				beg = mid + 1;
			}
			else {
				end = mid - 1;
			} 
			mid = beg + (end - beg) / 2;
		}
		if (*mid == i)
			return *mid;
		else
			return -1;
	}

private:
	vector<int> v;
};

class A {
public:
	A() {};
	void get(string s) {
		text.push_back(s);
	}

	void toUpper() {
		for (vector<string>::iterator it = text.begin(); it != text.end(); it++) {
			(*it)[0] = toupper((*it)[0]);
		}
	}

	vector<string> put() {
		return text;
	}

private:
	vector<string> text;
};

int main() {
/* 3.22
	string s;
	A a;
	while (cin >> s) {
		a.get(s);
	}

	a.toUpper();

	vector<string>temp = a.put();

	for (auto i : temp) {
		cout << i << " " ;
	}
*/

	/* 3.23
	vector<unsigned int>s;
	for (size_t i = 1; i <= 10; i++) {
		s.push_back(i);
		cout << i << " ";
	}

	cout << endl;
	for (auto it = s.begin(); it != s.end(); it++) {
		*it *= 2;
		cout << *it << " ";
	}*/

	vector<unsigned int>s;
	for (size_t i = 1; i <= 10; i++) {
		s.push_back(i);
		cout << i << " ";
	}
	cout << endl;



	return 0;
}