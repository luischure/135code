/**
 * @file caesar.cpp
 * @author Luis Chure Ortiz
 * @brief 
 * @version 0.1
 * @date 2022-10-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
#include<cctype> 
using namespace std;

char shiftChar(char c, int rshift){
    if(!isalpha(c)){
        return c;
    }

    char newChar = c + rshift;

    if (islower(c) && c+rshift > 'z'){
        newChar = c + rshift - 26; 
        //newChar = newChar -26;
        //newChar-= 26
    }
    if (isupper(c) && c+rshift > 'Z'){
        newChar = c + rshift - 26; 
    }
return newChar; 

}
string encryptVigenere(string plaintext, string keyword){
    char currentChar, currentKeywordChar, shiftedChar;
    int keywordIndex = 0;
    int shift;;
    string encrypted = "";
    for ( int i = 0 ; i < plaintext.length(); i++) {//loops throug plain text
    currentChar = plaintext[i];
    currentKeywordChar = keyword[keywordIndex];
    shift = currentKeywordChar - 'a';
    shiftedChar = shiftChar(currentChar, shift ); 
    if(isalpha(currentChar)){
        keywordIndex++;
    }
    if(keywordIndex > keyword.size()-1){
        keywordIndex = 0;
    }
    encrypted += shiftedChar; 
    }
    return encrypted;
}



int main(){
    //var, prompt, input
    string s; 
    cout << "enter plaintext: ";
    getline(cin, s);

    string k;
    cout << "Enter a key word: ";
    cin >> k; 

   string x  = encryptVigenere(s,k);
    cout << "CipherText: "<< x << endl;

}