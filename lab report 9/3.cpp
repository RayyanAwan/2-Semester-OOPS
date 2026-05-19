#include<iostream>
using namespace std;

class Shape{
	public:
	virtual void draw()=0;
};
class Circle:public Shape{
public:
	void draw(){
		cout<<"This is the circle  "<<endl;
	}	
};
class Square:public Shape{

	public:
	void draw(){
		cout<<"This is the Square  "<<endl;
	}
};
int main(){
	Shape *squ;
	Circle cle;
	Square sue;
	squ = &cle;
	squ -> draw();
	squ = &sue;
	squ -> draw(); 
	return 0;
}


//Task 3:
//Implement runtime polymorphism in C++.
//a) Create a base class named Shape
//b) Add a virtual function draw()
//c) Create a class named Circle that inherits from Shape
//d) Override the draw() function in Circle
//e) Create a class named Square that inherits from Shape
//f) Override the draw() function in Square
//g) In the main() function:
//? Create objects of Circle and Square
//? Use a Shape class pointer to call the draw() function
//? Demonstrate polymorphism by calling different implementations of draw().
