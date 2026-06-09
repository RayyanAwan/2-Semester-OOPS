#include<iostream>
using namespace std;
int main() {
    int valid;
cout<<"It's up to you whatever the choie is : "<<endl<<endl;
    cout<<" Enter 1 for integer error , 2 for text error: ";
    cin>>valid;
    try {
        if (valid == 1) {
            throw "Page not found "; 
        }
        else if (valid == 2) {
            throw "Text message is not appears!"; 
        }
        else {
            cout<<" Your website is working good. "<<endl;
        }
    }
    catch (int issue) {
        cout<<" Integer Error: "<<issue<< endl;
    }
    catch (const char* solved) {
        cout<<" Text Error: " <<solved<< endl;
    }
    return 0;
}


//Write a C++ program that uses two catch blocks: one for
//an integer error and one for a text message error.

