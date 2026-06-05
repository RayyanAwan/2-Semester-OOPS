//Design an abstract class Shape with pure virtual functions area() and perimeter(). Implement
//at least three derived shapes. Store them in a base class pointer array and print the details of
//all shapes.

#include<iostream>
using namespace std;

class Shape{
	public:
		virtual void area() = 0 ;
		virtual void perimeter() =0;
};

class Diamond: public Shape{
	public:
		void area(){
			cout<<"The  Diamond shape area."<<endl;
		}
			void perimeter(){
			cout<<"The  Diamond shape perimeter."<<endl;
		}
};

class Trapizm: public Shape{
	public:
		void area(){
			cout<<"The  Trapizm shape area. "<<endl;
		}
			void perimeter(){
			cout<<"The  Trapizm shape perimeter "<<endl;
		}
};

class Hexagon: public Shape{
	public:
		void area(){
			cout<<"The HEXAGON shape area."<<endl;
		}
			void perimeter(){
			cout<<"The HEXAGON shape perimeter."<<endl;
		}
};

int main(){
	Shape *sps[3];
	sps[0] = new Diamond();
	sps[1] = new Trapizm();
	sps[2] = new Hexagon();
	
	cout<<"Details of all Shapes "<<endl;
	for(int q=0;q<3;q++){
		cout<<endl;
		sps[q]->area();
		sps[q]->perimeter();
		cout<<endl;
	}
	
	return 0;
}
