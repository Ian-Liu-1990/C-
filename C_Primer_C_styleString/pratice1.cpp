#define _CRT_SECURE_NO_WARNINGS
#include"pratice1.h"

vector<string>Strtok(const string s, const char *delim) {
	vector<string> v_temp;
	char* sPtr = new char[s.size() + 1]; // +1 ��'\0'
	strncpy(sPtr, s.c_str(), s.size()+1);  // �ƨ�(�ؼ�, �ӷ�, �ӷ��̤j�r����)��sizeof(char [])
	char* scanner = nullptr;
	scanner = strtok(sPtr, delim); // �C���I�sstrtok�N��1�ӹJ�쪺���j�Ŵ�����'\0', �^�Ǳ��y���Ĥ@�Ӧ�m�a�}, �ҥH��r��C�|�Q�}�a!!!
	while (scanner != NULL) {
	
		v_temp.push_back(string(scanner)); // string���غc�l�|�۰ʽƻs
		scanner = strtok(NULL, " "); // �ĤG���I�s�A���Null
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