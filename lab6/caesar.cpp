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
string encryptCaesar(string plaintext, int rshift){
    char currentChar, shiftedChar;
    string encrypted = "";//creating a string to place all the new shifted characters into
    for (int i = 0; i < plaintext.length(); i++){
        currentChar = plaintext[i];//getting every character for the index

        plaintext[i] = shiftChar(currentChar, rshift);

        
        

    }
    return plaintext; 
}

int main(){
    //var, prompt, input
    string s; 
    cout << "enter plaintext: ";
    getline(cin, s);

    int rshift;
    cout << "Enter a shift\t: ";
    cin >> rshift; 

    string encryptedString = encryptCaesar(s , rshift);
    cout << "CipherText\t: "<< encryptedString << endl;

}