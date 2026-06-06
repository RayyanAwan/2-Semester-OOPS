// Task 5: Dynamic Memory Allocation (Single Variable)
// Uses new to dynamically allocate memory for an integer
// Assigns a value to that memory
// Prints the value using the pointer
// Frees the memory using delete

#include<iostream>
using namespace std;
int main(){
	int *ppp = new int;
	*ppp = 35;
	cout<<" Value : "<<*ppp<<endl;
	delete ppp;
	
	return 0; 
}
