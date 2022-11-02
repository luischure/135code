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
    int width;
    cout << "Enter width: ";
    cin >> width;
    int height;
    cout<< "enter a height: ";
    cin >> height;
//user input
    cout<< "Shape:\n";
    // prints shape before the actual image
    for(int i = 0; i < height; i++){//loop for height
        for(int j = 0; j < width; j++){//loop for width
            if(i % 2 == 0 && j % 2 == 0){
                cout << "*";//if row is is even and column is even print *
            }
            else if(i % 2 != 0 && j % 2 != 0){
                cout << "*"; // if row is odd and column is odd print *
            }//using mod to determine positive or negative
            else{
                cout<< " ";
            }//for any other combo print out a space
        } 
            cout << endl;//prints on new lines once conditions are met
    }
}