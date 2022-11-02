/**
 * @file taskA.cpp
 * @author Luis Chure Ortiz
 * @brief 
 * @version 0.1
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream> 
#include<cctype>
#include<string>
using namespace std;


string removeLeadingSpaces(string line){
    bool leadingSpaces = true;
    string res = "";
    for(int i = 0; i < line.length(); i++){
        if (!(leadingSpaces && isspace(line[i]))){
            res += line[i];
            leadingSpaces = false;
        }
    }
    return res;

}

int countChar(string line, char c){
    int counter;
    for (int i = 0; i < line.length(); i ++){
        if(line[i]== c ){
            counter++;
        }
    }
    return counter;
}

int main() {
   string line, res;
   int open_blocks; 
   while(getline(cin, line)) {
   res = removeLeadingSpaces(line);
         if(res[0] == '}'){
             for( int i = 0; i < open_blocks-1; i++){
                cout << '\t';
            }
        }
    else {
      for( int i = 0; i < open_blocks; i++){
        cout << '\t';
      }
    }
       open_blocks += countChar(res, '{');
       open_blocks -= countChar(res, '}');
       
       cout << res << endl;
   }

}

