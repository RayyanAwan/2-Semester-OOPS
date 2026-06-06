// Task 3: Array Traversal Using Pointer
// Creates an integer array of 5 elements
// Uses a pointer to point to the first element of the array
// Traverses the array using pointer arithmetic (ptr + i or ptr++)
// Prints all elements using the pointer (not array indexing).

#include<iostream>
using namespace std;

int main(){
	int moo[5] = {22,36,44,74,11};
	int *put = moo;
	for(int t=0; t<5; t++){
		cout<<*(put+t)<<endl;
	}
	return 0;
}
