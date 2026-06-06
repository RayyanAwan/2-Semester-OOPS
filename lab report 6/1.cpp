//Define a base class Vehicle with private member variables model and year, and a public
//method displayDetails() to display these values. Create a derived class Car that inherits
//from Vehicle and adds a public method startEngine() to start the car’s engine. Demonstrate
//using both base class and derived class members in the main() function.

#include<iostream>
using namespace std;

class Vehicle{
	private:
		string model="Kia Sportage";
		int year=2024;
	public:
	void displayDetails(){
		cout<<"The vehicle model : "<<model<<endl;
		cout<<"The vehicle year : "<<year<<endl;
	}	
};
class Car : public Vehicle{
	public:
		void startEngine(){
			cout<<"car engine is start"<<endl;
		}
};
int main(){
	Car c1;
	c1.displayDetails();
	c1.startEngine();
	return 0;
}
