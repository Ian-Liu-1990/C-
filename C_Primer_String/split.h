#ifndef SPLIT_H
#define SPLIT_H
#include<string>
#include<vector>
#include<cctype>
using std::string;
using std::vector;

// ��k�@
// �N�@�Ӧr��̷ӪťղŤ��Φ��@�ӳ��
// �ݭn�@��vector<string>�s���C�ӳ��
// �n�����ťզ�m string::find(string, �}�l�w�I)size_t
// �Q�νƻscopy�N�q�Ĥ@�Ӧr����ťիe�@�Ӧr��




// ��k�G
// �N�@�Ӧr��̷ӪťղŤ��Φ��@�ӳ��
// �ݭn�@��vector<string>�s���C�ӳ��
// �n�����ťզ�m string::find(string, �}�l�w�I)size_t
// �Q��substr(start_pos, copy_length)�ƻs�N�q�Ĥ@�Ӧr����ťիe�@�Ӧr��
vector<string> split_1(string& s) {
	vector<string> word;
	if (s.empty())
		return word;

	string temp = s + " "; // �Q�Q�ݨ�L��k

	for (string::size_type i = 0, j = 0; i < temp.size(); i++) {
		if (isspace(temp[i])) {
			word.push_back(temp.substr(j, i - j)); // �l�r�q���^���_�l��m�A�^������(�^���� - "�_�l��m")
			j = i + 1; // �U�@���_�l��m�q : "�^���Ū��U�@�Ӷ}�l"
		}
	}

	return word;
}
#endif
