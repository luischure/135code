#include<iostream>
using namespace std;

int main(){
    int width;
    cout << "Enter width: ";
    cin >> width;
    int height;
    cout<< "enter a height: ";
    cin >> height;

    cout<< "Shape:\n";
    bool star = true, start_star = true;
    
    for(int i = 0; i < height; i++){
        star = start_star;

        for(int j = 0; j < width; j++){
            if(star){
                cout << "*";
            }else{
                cout<< " ";
            }
            star = !star;
        }
        cout << endl;
        start_star = !start_star;
    }
}