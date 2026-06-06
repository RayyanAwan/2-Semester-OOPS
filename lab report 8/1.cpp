//Write a C++ program that:
//Declares an integer variable (e.g., int num = 10;)
//Declares a pointer to an integer
//Assigns the address of the variable to the pointer
//Prints:
//The value of the variable
//The address of the variable
//The value stored in the pointer (address)
//The value pointed to by the pointer

#include<iostream>
using namespace std;


int main(){
	int RS = 33 ;
	int *p = &RS;
	cout<<" value of the variable : "<<RS<<endl;
	cout<<" address of the variable : "<<&RS<<endl;
	cout<<" value stored in the pointer : "<<p<<endl;
	cout<<" value pointed to by the pointer : "<<*p<<endl;
	return 0;
}
