/**
 * @file test-ascii.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
using namespace std; 

int main(){
    string s; 
    cout << "enter a line: ";
    getline(cin, s);
    char result;

    for (int i = 0 ; i < s.length(); i++){
        result = s[i];
        cout << result << " " << (int)result<< endl;
    }

}