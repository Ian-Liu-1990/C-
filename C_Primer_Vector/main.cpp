#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

void c3_3() {
	string word;
	vector<string> v;

	while (cin >> word) {
		v.push_back(word);
	}

	for (vector<string>::iterator it = v.begin(); it != v.end(); it++) {
		for (int i = 0; i < (*it).size(); i++) {
			(*it)[i] = toupper((*it)[i]);
		}
	}

	for (auto i = 0; i < v.size(); i++) {
		if (i != 0 && i % 8 == 0)
			cout << endl;
		cout << v[i] << " ";
	}
}

void c3_3_19() {
	vector<int> v1(10, 42); // 程

	vector<int>v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42}; // 程畉

	vector<int>v3;
	for (size_t i = 0; i < 10; i++)
		v3.push_back(42);
}


class a {
public :
	a() {};
	void get(int i) {
		v.push_back(i);
	};

	bool Empty() {
		return v.empty();
	};

	bool MoreThanOne() {
		return v.size() - 1 > 0;
	}

	vector<int> cal() {
		vector<int> tmp;
		for (auto i = 0; i < v.size() - 1; ++i)
			tmp.push_back(v[i] + v[i+1]); // 硂贺+猭繧!!! 甧禬絛瞅(璶瞶├)!!!!

		return tmp;
	}

	vector<int>cal_2() {
		vector<int> tmp;
		size_t size;

		if (v.size() % 2 != 0) {     // 1 2 3 4 [5] 6 7 8 9 (1, 9)(2, 8)(3, 7)(4, 9)(5, 5)
			size = v.size() / 2 + 1; // 琵虫縒计55+5(璶瞶├)!!!
		}
		else {                   // 1 2 3 4 5 6 7 8 9 10
			size = v.size() / 2; // 案计玥ㄢㄢΘ癸(1, 10)(2, 9)(3, 8)(4, 7)(5, 6)
		}

		for (auto i = 0; i < size; i++)
			tmp.push_back(v[i] + v[v.size() - i - 1]);

		return tmp;
	}


private:
	vector<int>v;
};

int main() {

	//c3_3();

	a Va;
	int i;
	while (cin >> i) {
		Va.get(i);
	}

	if (Va.Empty()) {
		return -1;
	}
	else if (!Va.MoreThanOne()) {
		return -1;
	}
	else {
		vector<int> tmp;
		//tmp = Va.cal();
		tmp = Va.cal_2();
		for (auto i = 0; i < tmp.size(); i++)
			cout << tmp[i] << " ";
	}

	return 0;
}