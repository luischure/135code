/*
NameL:Luis Chure Ortiz 
Course: CSCI 135
Assignment: lab 4 Task D
Instructor: Mandy Yu
this program prints the bottom left half of a square.
*/
#include<iostream>
using namespace std; 

int main(){
    int length;
    cout <<"enter a length: ";
    cin >> length;
    cout << endl; 
    for( int i = 0 ; i < length; i++){
        for(int j = 0; j< length; j++){
        
        if( j < length - i){
            cout<<" ";
        }
        else{
            cout << "*";
        }
    }
    cout << endl;
}
}