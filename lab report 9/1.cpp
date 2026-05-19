#include<iostream>
using namespace std;
class Polygon{
	public:
		virtual void displayResult()=0;
};

class Rectangle:public Polygon{
	private:
		float area,width,height;
	public:	
		void getdata(float wd, float ht){
			width = wd;
			height = ht;
		}
	public:
		void displayResult(){
			area = width * height;
			cout<<"Area of the Reactangle : "<<area<<endl;
		}
};

class Triangle:public Polygon{
	private:
		float area,width,height;
			public:
		void getdata(float wd, float ht){
			width = wd;
			height = ht;
		}
		void displayResult(){
			area = (width * height)/2;
			cout<<"Area of the Triangle : "<<area<<endl;
		}
};

int main(){
	Rectangle rtg;
	Triangle trg;
	
	rtg.getdata(8,5);
	trg.getdata(10,15);
	
	Polygon *p;
	
	p = &rtg;
	p -> displayResult();
	
	p= &trg;
	p -> displayResult();
		
	return 0;
}




//Write a C++ program that defines a base class Polygon. The class should contain a virtual
//member function:
//void displayResult();
//Derive two classes Rectangle and Triangle from the Polygon class. Override the displayResult()
//function in both derived classes.
//? In class Rectangle, calculate the area using:
//area = width * height
//? In class Triangle, calculate the area using:
//area = (width * height) / 2
//
//In the main() function, create objects of Rectangle and Triangle and use a base class pointer to
//call the displayResult() function and display the calculated areas
