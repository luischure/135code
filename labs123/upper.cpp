/*
NameL:Luis Chure Ortiz 
Course: CSCI 135
Assignment: lab 4 Task E
Instructor: Mandy Yu
this program prints the upper right half of a square.
*/
#include<iostream>
using namespace std; 

int main(){
    int length;
    cout <<"enter a length: ";//user input for length 
    cin >> length;
    cout << endl; 
    if (length < 0){
        cout << "enter a postive integer.";
    }
    else {
    for( int i = 0; i < length; i++){//for every row print a colomn of the star
        for(int j = 0 ; j< length; j++){//if col is greater than or equal to the row number print * 
        // else print space
        if( j >= i){
            cout<<"*";
        }
        else{
        
            cout << " ";//prints a space 
        }
    }
   cout << endl;//repeats the loop for every row that is in the for loop
}
}
}