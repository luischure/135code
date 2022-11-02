/**
 * @file trapezoid.cpp
 * @author Luis Chure 
 * @brief this program prints out a trapezoid shape 
 * @version 0.1
 * @date 2022-10-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream> 
using namespace std; 

int main(){

    int width; 
    cout << "enter width: ";
    cin >> width;
    int height;
    cout << "enter height: ";
    cin >> height;

    cout << "shape\n"; 

    int spaces = 0;
    int stars = width;

    for (int i = 0; i < height; i++){
        spaces += 1;
        stars -= 2;//decrements the 2 for every element of height 
    }
    if (stars + 1 < 0){
        cout << "impossible shape.";
    }

    else {
        cout << "Shape:" << endl;

        for(int row = 0; row < height; row++){
            for(int col = 0; col < width; col++){
                if(row >= col + 1 || col >= width - row){
                    cout << " ";//prints space if row is greater than or equal to the column increment so nothing 
                    //for the first col but then the next column it will have a space for the 1st increment 
                    // and a space for the last
                } else{
                    cout << "*";
                }
            }
            cout << endl; 
        }
    }

}
