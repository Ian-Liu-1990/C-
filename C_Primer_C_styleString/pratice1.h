#ifndef PRATICE_1_H	
#define PRATICE_1_H

#include<vector>
#include<string>
#include<cstring>
#include<iostream>
using std::vector;
using std::string;
using  std::cout;

// 練習 1 - C++ 沒有Split功能
// 練習借用strtok的功能將字符串切格再存回vector中
// 1. 因為strtok只接受C-Style的字串所以要先從C++ String複製字串
// 2. 如何配置與string相同大小容量的C-Style的字串
// 3. 如何複製與string相同大小容量的C-Style的字串
// 4. 連續呼叫strtok切割第1次呼叫和之後連續呼叫的差異!!!!
vector<string>Strtok(const string s, const char delim);
void test_Strtok();

// 練習 2 - C++ string "刪除標點符號"
// 給定想刪除的符號序列

#endif
