//Task 4: Modify Value Using Pointer Function
//Write a program that:
// Declares an integer variable
// Creates a function void doubleValue(int* ptr)
// Inside the function, double the value using the pointer (*ptr = *ptr * 2)
// Call the function from main()
// Print the value before and after function call

#include<iostream>
using namespace std;

void doubleValue(int* putt){
	*putt=*putt *2;
}

int main(){
	int tt=15;
	cout<<"Before value is : "<<tt<<endl;
	doubleValue(&tt);
	cout<<"After value is : "<<tt<<endl;
	return 0;
}
