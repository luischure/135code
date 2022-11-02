/*
Name: Luis Chure Ortiz 
Course: CSCI 135 
Assignment: Lab 2A
intructor: Mandy Yu
*/
#include<iostream> 
using namespace std;

int main(){
    //set all array indexes to 1
    int myData[10],i,v;
    for( i = 0 ; i <10 ; i++)
        myData[i] = 1;
do {
   //prints the array index
    for (i = 0; i <10; i++){
    cout << myData[i]<< " ";
    }
    //takes the users input for value i and v
        cout << endl << endl;
        cout << "input index:";
        cin >> i;
        cout<< "input value:";
        cin >> v;
        // checks if the new values are true 
        if(i>=0 && i<10)
        myData[i]=v;
        else if(i<0 || i >=10){
            cout << "index is out of range. exit.";
            break;
}
}

while(i>=0 && i<=9);

}