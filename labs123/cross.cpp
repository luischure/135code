/*
Name: Luis Chure Ortiz
Course: CSCI 135 
Assignment: lab 4B
Intructor: Mandy Yu
This program creates a pattern of the character * 
*/
#include<iostream>
using namespace std; 

int main(){
    int size;
    cout << "enter a size: ";
    cin >> size;

    cout << "Shape:\n";
    for( int row = 0; row < size; row++){// for loop 
        for(int col = 0; col < size; col++ ){
            if( col == row || col == size-1-row){// if col is thes same as the row or col is the number of size - 1 - row 
            //then print "*" 
            // we use the or statment because one or the other statment can be true in here
            cout<< "*";
            } 
            else{
                cout<< " ";
            }// prints a space for anything other condition the if statment doesnt meet
        }
        cout<<endl;
        // prints the loop on a new line 
    }
    
}