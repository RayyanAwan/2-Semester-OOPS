#include<iostream>
using namespace std;
int main(){
	int g,k;
    cout<<" Enter the 1 Number: ";
    cin>>g;
    cout<<" Enter the 2 Number: ";
    cin >> k;
    try {
        if (k == 0) {
            throw " NOT! divisible. ";
        }
        else {
            cout<<" The divible number is :" << g/k << endl;
        }
    }
    catch (const char* vvvv) {
        cout<<" second number should be greater then first.  " << vvvv << endl;
    }
	return 0;
}

//Write a C++ program that takes two integers as input from the 
//user and performs division Handle the error if the second number is zero.

