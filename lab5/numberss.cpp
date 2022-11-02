/**
 * @file numbers.cpp
 * @author Luis Chure Ortiz
 * @brief 
 * @version 0.1
 * @date 2022-09-29
 * @param n,d 
 * @copyright Copyright (c) 2022
 * 
 */


#include<iostream> 
using namespace std;

bool isDivisbleby(int n, int d){
    if(d == 0){
        return false;
    }
    else if(n % d == 0){
        return true;
    }
    else{
        return false;
    }
}
bool isPrime(int n){
    if( n <2 ){
        return false;
    }
    for(int i = 2; i < n; i++){
        if(isDivisbleby(n,i)){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<< "enter a number: ";
    cin >> n;

    bool x = isPrime(n);

    cout << x;

}