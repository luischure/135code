/**
 * @file numbers.cpp
 * @author Luis Chure Ortiz
 * @brief function lab
 * @version 0.1
 * @date 2022-10-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream> 
using namespace std;

bool isDivisbleby(int n, int d){
    if(d == 0){
        return false;// if the number is 0 then it is automatically false.
    }
    else if(n % d == 0){
        return true;
    }
    else{
        return false;
    }
}
bool isPrime(int n){
    if( n < 2 ){
        return false;
    }
    for(int i = 2; i < n; i++){
        if(isDivisbleby(n,i)){
            return false;
        }
    }
    return true;
}

int nextPrime(int n){
    int i = n + 1;// starts at n+1 because we are looking for the next prime greater than n 
    while(!isPrime(i)){//while isPrime is not prime !
        i++;//increment (n+1)+1 by one until the program returns false which then breaks the loop and retursn the num
    }
    return i;
}

int countPrimes(int a, int b){
    int counter = 0;// variable is inatialized to zero because we want to start at 0 and for every prime number
    //between A and B will be counted and incremented into the counter variable
    for(int i = a ; i <= b; i++){
        while(!isPrime(i)){
            i++;
        }
        counter++;// increments the counter variable
    }
    return counter;// returns the counter variable because we only want the number of primes not 
    //the exact primes 
}

bool isTwinPrime(int n){
    if (!isPrime(n)){
        return false;//if the number is not a prime the code will just immediatly return false
    }

    if (isPrime(n-2)|| isPrime(n+2)){// checks the numbers behind n by 2 and ahead by 2
        return true;// if the numbers apart from n by a factor of 2 are prime numbers then the statment is true
    }

    else{
        return false;// else will just be false 
    }

}

int nextTwinPrime(int n){// use ! to make the while loop work until it finds a twin prime
    int i = n + 1;// makes the number greater than n
    while(!isTwinPrime(i)){// while loop. while the number is NOT a twin prime icrement 
    //by one until a number becomes a prime number to break the loop
        i++;// increments by one
    }
    return i;// returns the twin prime number 
}

int largestTwinPrime(int a, int b){
    for (int i = b; i >= a ; i-- ){// starts at the larger number and decrements down testing each 
    //value if it is a twin prime.
        if(isTwinPrime(i)){// because it decrements down we find the largest twin prime since b is the larger value and we start at b
            return i;
        }
        
    }
    return -1; // return -1 if no twin prime exist
}

int main(){
   int a,b;
   cout<< "enter a number: ";
   cin >> a;
   cout<< "enter a number: ";
   cin >> b;
  
    cout << largestTwinPrime(a,b) << endl;
  

}