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
        if(isDivisbleby(n,1)){
            return false;
        }
    }
    return true;
}

int nextprime(int n){
    int num = n + 1;
    while(!isPrime(num)){//while isPrime is not prime !
        num++;//increment (n+1)+1 by one until the program returns false which then breaks the loop and retursn the num
    }
    return num;
}
int countPrimes(int a, int b){
    int counter=0;
    for(int i = a ; i < b; i++){
        while(!isPrime(i)){
            i++;
        }
        counter++;
    }
}

int main(){
    int n;
    cout<< "enter a number: ";
    cin >> n;
    int d;
    cout << "enter another number: ";
    cin >> d;

    int x = isDivisbleby(n,d);
    cout <<"true or false" << x << endl;


}
