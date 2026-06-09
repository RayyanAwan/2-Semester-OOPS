#include<iostream>
using namespace std;
int main() {
    int t;
    cout<<" Enter the Number: ";
    cin>>t;
    try {
        if (t < 0) {
            throw " wrong number ";
        }
        else {
            cout<<"Number (n>0) is :  " << t << endl;
        }
    }
    catch (const char* matha) {
        cout<<" You entered ! " << matha << endl;
    }
    return 0;
}

//1. Write a C++ program that takes one number from the user. If the number
//is negative, throw and catch a simple error message.
