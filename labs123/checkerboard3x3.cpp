/**
 * @file checkerboard3x3.cpp
 * @author Luis Chure 
 * @brief This program prints a 3x3 checkerboard
 * @version 0.1
 * @date 2022-10-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
using namespace std;

int main(){
    int height, width;
    cout << "enter a widtht: ";
    cin >> width;// user input for height and width
    cout << "enter a height: ";
    cin >> height;

    cout << "\nShape: "<< endl;

    for(int row = 0; row < height; row++ ){
        for(int col = 0; col < width; col++){
            if((col % 6 == 0 || col % 6 == 1 || col % 6 == 2) && (row % 6 == 3 || row % 6 == 4 || row % 6 == 5)) {
                cout << " "; 
            } else if( (row % 6 == 0 || row % 6 == 1 || row % 6 == 2) && (col % 6 == 3 || col % 6 == 4 || col % 6 == 5)) {
                cout << " ";
            } else {
                cout << "*";
            }
        }   
        cout << endl;
    }
    return 0;
}