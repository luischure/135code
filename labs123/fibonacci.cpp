/*
Name: Luis Chure Ortiz 
Course: CSCI 135 
Assignment: Lab 2A
intructor: Mandy Yu
*/
#include<iostream>
using namespace std;

int main(){
    int fib[60];
    fib[0]= 0;
    fib[1]= 1;

    for (int i = 2 ; i < 60; i++){
        fib[i]= fib[i-1]+fib[i-2];
    }
    for (int i = 0 ; i < 60 ; i++){
        cout << fib[i] << endl;
    }
    //cout << " the highest int value is " << INT_MAX;
    // as the numbers approach 2 billions the numbers diverge from being only positive and alternate between negative and positive 
}