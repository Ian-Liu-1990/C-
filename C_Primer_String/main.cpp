#include<string>
#include<iostream>
#include<cctype>
#include"split.h"
using std::string;
using std::cin;
using std::cout;

void c3_6(string& s) {
	if (s.empty())
		return;

	for (auto& c : s) {
		c = 'X';
	}
}

void c3_10(string &s) {
	if (s.empty())
		return;

	for (string::size_type i = 0; i < s.size(); i++) {
		if (ispunct(s[i]))
			s.erase(i, 1);
	}
}

int main() {

	string s1{"Hello World"};
	string s2{"sd.er,eqw]qdfg[werdf]"};
	string s3{ "Returns a newly constructed string object with its value initialized to a copy of a substring of this object." };
	//c3_6(s1);
	//c3_10(s2);
	vector<string>word;
	word = split_1(s3);
	//cout << s2;

	for (vector<string>::iterator it = word.begin(); it != word.end(); it++) {
		cout << *it << std::endl;
	}

	return 0;
}