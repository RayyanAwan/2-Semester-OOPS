// Define an abstract class Vehicle with pure virtual functions fuelType() and speed(). Derive
// Car and Bicycle classes that implement these functions. Demonstrate polymorphism.

#include<iostream>
using namespace std;

class Vehicle{
	public:
		virtual void fuelType() = 0;
		virtual void speed() = 0; 
};

class Car:public Vehicle{
	public:
		void fuelType(){
			cout<<" Petrol , Desiel , Electronic "<<endl;
		}
		void speed(){
		cout<<"Swfit Car speed is 140 km/h "<<endl;	
		}	
};

class Bicycle:public Vehicle{
	public:
		void fuelType(){
			cout<<" Current Petrol liter is 385.25 ."<<endl;
		}
		void speed(){
		cout<<"Honada 125 Car speed is 80 km/h "<<endl;	
		}	
};

int main(){
	Vehicle* vhc[2];
    vhc[0] = new Car();
    vhc[1] = new Bicycle();
    
    cout<<"Details of Vehicle "<<endl;
    for(int i = 0; i < 2; i++){
    	cout<<endl;
        vhc[i]->fuelType();
        vhc[i]->speed();
        cout << endl;
    }
	return 0;
}
