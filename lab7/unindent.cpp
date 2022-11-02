/**
 * @file taskA.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream> 
#include<cctype>
using namespace std;

string removeLeadingSpaces(string line){
    bool leadingSpaces = true;
    string res = "";
    for(int i = 0; i < line.size(); i++){
        if (!(leadingSpaces && isspace(line[i]))){
            res += line[i];
            leadingSpaces = false;
        }
    }
    return res;

}

int main(){
string line;
while(getline(cin, line)) {
cout << removeLeadingSpaces(line) << endl;
}

}