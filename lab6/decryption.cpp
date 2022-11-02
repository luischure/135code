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
       
    }
    else if (islower(c) && c+rshift < 'a'){
        newChar = c + rshift + 26; 
       
    }
    
    else if (isupper(c) && c+rshift > 'Z'){
        newChar = c + rshift - 26; 

    }
    else if (isupper(c) && c+rshift < 'A'){
        newChar = c + rshift + 26; 

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

string encryptVigenere(string plaintext, string keyword){
    char currentChar, currentKeywordChar, shiftedChar;
    int keywordIndex = 0;
    int shift;;

    for ( int i = 0 ; i < plaintext.length(); i++) {//loops throug plain text
    currentChar = plaintext[i];
    currentKeywordChar = keyword[keywordIndex];
    shift = currentKeywordChar - 'a';
    plaintext[i] = shiftChar(currentChar, shift ); 
    if(isalpha(currentChar)){
        keywordIndex++;
    }
    if(keywordIndex > keyword.size()-1){
        keywordIndex = 0;
    }
    
    }
    return plaintext;
}

string decryptCaesar(string ciphertext, int rshift){
    char currentChar;
    
    for (int i = 0; i < ciphertext.length(); i++){
        currentChar = ciphertext[i];//getting every character for the index

        ciphertext[i] = shiftChar(currentChar, rshift * (-1));

    }
    return ciphertext; 
}

string decryptVigenere(string ciphertext, string keyword){
    char currentChar, currentKeywordChar;
    int keywordIndex = 0;
    int shift;

    for ( int i = 0 ; i < ciphertext.length(); i++) {//loops throug plain text
    currentChar = ciphertext[i];
    currentKeywordChar = keyword[keywordIndex];
    shift = currentKeywordChar - 'a';
    shift *= -1;
    ciphertext[i] = shiftChar(currentChar, shift ); 
    if(isalpha(currentChar)){
        keywordIndex++;
    }
    if(keywordIndex > keyword.size()-1){
        keywordIndex = 0;
    }
    }
    return ciphertext;
}


int main(){
    //var, prompt, input

    string x;
    cout << "enter plain text: ";
    getline(cin,x);

    int y;
    cout<< "enter a shift: ";
    cin >> y;

    string k;
    cout << "Enter a key word: ";
    cin >> k; 

   cout << "ciphertext for caesar:\t " << encryptCaesar(x,y)<< "\n" << "decrypted:\t" << decryptCaesar(x,y) << endl;
   cout << "ciphertext for Vigenere:\t" << encryptVigenere(x,k) << "\n" << "decrypt:\t" << decryptVigenere(x,k) << endl;
}