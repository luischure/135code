/*
Name: Luis Chure Ortiz
Course: CSCI 135 
Assignment: lab 4A
Intructor: Mandy Yu
*/
#include<iostream> 
using namespace std; 

int main(){
    int width;//user input for height and width
    cout << "enter a width: ";
    cin >> width;
    int height;
    cout << "enter a height: ";
    cin >> height;

    cout << "shape:"<<endl;
    //prints the string shape: before the image 
    for(int i = 0; i < height; i ++){
        for(int j = 0; j < width; j++){
            cout << "*";
        }
    //the second for loop prints the number of asteriks by width size. 
    //the first loop then prints it out i times depending on the height size. 
        cout << endl;
    }
    
}