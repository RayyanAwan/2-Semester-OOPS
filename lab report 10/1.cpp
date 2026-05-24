//Task 1: Create an abstract class named Shape. This class should contain a pure virtual function
//named draw() which will be used to display the shape.
//After that, create three derived classes named Circle, Square, and Triangle. Each of these classes
//should publicly inherit from the Shape class and provide their own implementation of the
//draw() function according to their respective shapes.
//In the main() function, create objects of Circle, Square, and Triangle. Use a base class pointer of
//type Shape to refer to each object one by one, and call the draw() function to demonstrate
//runtime polymorphism.


#include<iostream>
using namespace std;

class Shape{
	public:
		virtual void draw() = 0;
};

class Circle :public Shape{
	public:
		void draw(){
			cout<<"This is the Circle Shape "<<endl;
			
		}
};

class Square :public Shape{
	public:
		void draw(){
			cout<<"This is the Square Shape "<<endl;	
		}
};

class Triangle :public Shape{
	public:
		void draw(){
			cout<<"This is the Triangle Shape "<<endl;	
		}
};


int main(){
	Shape *shp;
	
	cout<<endl;
	cout<<" Different Shapes "<<endl<<endl;
	
	Circle c;
	shp = &c;
	shp->draw();
	
	
	Square squ;
	shp = &squ;
	shp->draw();
	
	Triangle trig;
	shp = &trig;
	shp->draw();
	
	return 0;
}



