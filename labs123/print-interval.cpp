/*
Name: Luis Chure Ortiz 
Course: CSCI 135 
Assignment: Lab 2A
intructor: Maryash
*/
#include<iostream>
using namespace std;
int main(){ //takes users input for values L and U
    cout << "enter an integer: ";
    int L;
    cin >> L;
    cout << "enter another integer: ";
    int U;
    cin >> U;
    // prints all the values between the values L and U 
    for(int i = L ; i < U; i++){
        cout << i << "\n";
    }

}