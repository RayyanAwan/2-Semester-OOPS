// Task 2: Swap Using Pointers
// Write a program that:
// Declares two integer variables (e.g., a = 5, b = 10)
// Creates a function swap(int* x, int* y)
// Inside the function, swap values using pointers
// In main(), call the function and print values before and after swapping

#include<iostream>
using namespace std;

void swap(int *m, int *o){
	int temp = *m;
	*m = *o;
	*o = temp;
}

int main(){
	int d=11, e=23;
	cout<<"Before swap the value is : "<<d<<"   "<<e<<endl;
	swap(&d, &e);
	cout<<"After swap the value is : "<<d<<"   "<<e<<endl;
	
	return 0;
}
