// Task 7: Double Pointer (Pointer to Pointer)
// Declares an integer variable
// Declares a pointer that stores its address
// Declares a double pointer that stores the address of the pointer
// Prints:
// Value of the variable
// Value using single pointer (*ptr)
// Value using double pointer (**ptr2)

#include<iostream>
using namespace std;

int main(){
	int rr = 41;
	int *ha = &rr;
	int **us = &ha;
	
	cout<<" Values is  : " <<rr<<endl;
	cout<<" Single pointer  values : "<<*ha<<endl; 
	cout<<" Double pointer is : "<<**us<<endl;
	return 0;
}
