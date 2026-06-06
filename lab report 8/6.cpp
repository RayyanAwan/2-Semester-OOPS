// Task 6: Dynamic Array and Sum
// Dynamically allocates an array of 5 integers using new
// Takes input from the user to fill the array
// Calculates and prints the sum of all elements
// Frees the memory using delete[].

#include<iostream>
using namespace std;

int main(){
	int *dd = new int[5] ;
	int sum=0;
	cout<<"Enter the Numbers "<<endl;
	for(int t=0; t<5; t++){
		cin>>dd[t];
	} 
	for(int t=0; t<5; t++){
		sum = sum + dd[t];
	} 
	cout<<" SUM of the array values is  :  "<<sum;
	delete[] dd;
	
	return 0;
}
