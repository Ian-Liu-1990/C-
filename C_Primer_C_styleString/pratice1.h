#ifndef PRATICE_1_H	
#define PRATICE_1_H

#include<vector>
#include<string>
#include<cstring>
#include<iostream>
using std::vector;
using std::string;
using  std::cout;

// �m�� 1 - C++ �S��Split�\��
// �m�߭ɥ�strtok���\��N�r�Ŧ����A�s�^vector��
// 1. �]��strtok�u����C-Style���r��ҥH�n���qC++ String�ƻs�r��
// 2. �p��t�m�Pstring�ۦP�j�p�e�q��C-Style���r��
// 3. �p��ƻs�Pstring�ۦP�j�p�e�q��C-Style���r��
// 4. �s��I�sstrtok���β�1���I�s�M����s��I�s���t��!!!!
vector<string>Strtok(const string s, const char delim);
void test_Strtok();

// �m�� 2 - C++ string "�R�����I�Ÿ�"
// ���w�Q�R�����Ÿ��ǦC

#endif
