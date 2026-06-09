#include<iostream>
using namespace std;

int main(){
	int age;
    cout<<" Enter the age ";
    cin>>age;
    try {
        if (age < 0  || age > 120) {
            throw " You are robote! ";
        }
        else {
            cout<<" Your valid age is " << age << endl;
        }
    }
    catch (const char* umerr) {
        cout<<" hhahha " <<umerr<< endl;
    }
	return 0;
}

// Write a C++ program that takes age as input. If age is less 
// than 0 or greater than 120, throw and catch an error message.

