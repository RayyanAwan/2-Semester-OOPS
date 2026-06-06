//Create a base class Shape with a public virtual method calculateArea() to compute the area
//of a shape. Derive classes Circle and Rectangle from Shape, overriding the calculateArea()
//method to compute the area specific to each shape. Demonstrate polymorphism by calling
//calculateArea() on objects of both Circle and Rectangle using base class pointers or
//references.

#include<iostream>
using namespace std;
class Shape{
	public:
		virtual void calculateArea(){
			cout<<"To complete area of a shape "<<endl;
		}
};
class Circle : public Shape{
	private:
		float radius;
	public:
		Circle(float r){
			radius = r;
		}	
	void calculateArea(){
		cout<<"Area of Circle: "<<3.14 * radius * radius <<endl;
	}		
};
class Rectangle : public Shape{
	private:
		float length, width;
	public:
		Rectangle(float l, float w){
			length = l;
			width = w;
		}

		void calculateArea(){
			cout<<"Area of Rectangle: "<<length * width <<endl;
		}
};
int main(){
	Shape* s;  
	Circle c1(6);
	Rectangle r1(11, 4);
	s = &c1;
	s->calculateArea(); 
	s = &r1;
	s->calculateArea(); 
	return 0;
}
