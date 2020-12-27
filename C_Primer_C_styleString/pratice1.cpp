#define _CRT_SECURE_NO_WARNINGS
#include"pratice1.h"

vector<string>Strtok(const string s, const char *delim) {
	vector<string> v_temp;
	char* sPtr = new char[s.size() + 1]; // +1 給'\0'
	strncpy(sPtr, s.c_str(), s.size()+1);  // 複制(目標, 來源, 來源最大字元數)或sizeof(char [])
	char* scanner = nullptr;
	scanner = strtok(sPtr, delim); // 每次呼叫strtok將第1個遇到的分隔符替換成'\0', 回傳掃描的第一個位置地址, 所以原字串列會被破壞!!!
	while (scanner != NULL) {
	
		v_temp.push_back(string(scanner)); // string的建構子會自動複製
		scanner = strtok(NULL, " "); // 第二次呼叫，改用Null
	}
	return v_temp;
}

void test_Strtok() {
	string aPtr = "On a first call, the function expects a C string as argument for str, whose first character is used as the starting location to scan for tokens. In subsequent calls, the function expects a null pointer and uses the position right after the end of the last token as the new starting location for scanning.";
	cout << aPtr << "\n\n";
	vector<string> tmp;
	tmp = Strtok(aPtr, " .,");

	for (auto s : tmp) {
		cout << s << "\n";
	}
}