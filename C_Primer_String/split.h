#ifndef SPLIT_H
#define SPLIT_H
#include<string>
#include<vector>
#include<cctype>
using std::string;
using std::vector;

// 方法一
// 將一個字串依照空白符分割成一個單詞
// 需要一個vector<string>存取每個單詞
// 要先找到空白位置 string::find(string, 開始定點)size_t
// 利用複製copy將從第一個字元到空白前一個字元




// 方法二
// 將一個字串依照空白符分割成一個單詞
// 需要一個vector<string>存取每個單詞
// 要先找到空白位置 string::find(string, 開始定點)size_t
// 利用substr(start_pos, copy_length)複製將從第一個字元到空白前一個字元
vector<string> split_1(string& s) {
	vector<string> word;
	if (s.empty())
		return word;

	string temp = s + " "; // 想想看其他方法

	for (string::size_type i = 0, j = 0; i < temp.size(); i++) {
		if (isspace(temp[i])) {
			word.push_back(temp.substr(j, i - j)); // 子字段的擷取起始位置，擷取長度(擷取符 - "起始位置")
			j = i + 1; // 下一次起始位置從 : "擷取符的下一個開始"
		}
	}

	return word;
}
#endif
