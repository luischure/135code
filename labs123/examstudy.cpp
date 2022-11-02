#include<iostream> 
#include<cmath>
using namespace std;


double foo(double n, double b){
     int x = (b + sqrt(pow(b,3)-1))/n;
     return x;
}

int main(){
    int n, b, x;
    cout << "enter a number: ";
    cin >> n;
    cout << "enter another number: ";
    cin >> b;

    x = foo(n,b);
    cout << x << endl;
}