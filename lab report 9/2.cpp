#include<iostream>
using namespace std;
class Person{
	public:
	virtual void getName()=0;
};
class Student:public Person{
	private:
		string name;
	public:
	 Student(string ne){
	 	name = ne;
	 }
	void getName(){
		cout<<"Student Name is :  "<<name<<endl;
	}	
};
class Professor:public Person{
		private:
		string name;
	public:
	 Professor(string ne){
	 	name = ne;
	 }
	void getName(){
		cout<<"Professor Name is :  "<<name<<endl;
	}
};
int main(){
	Person *pn;
	Student ste("Hanzala");
	Professor pfr("Ghulam Mustafa");
	
	pn = &ste;
	pn -> getName();
	
	pn = &pfr;
	pn ->getName(); 
	return 0;
}




// Task 2:
// Implement runtime polymorphism in C++.
// a) Create a base class named Person
// b) Add a virtual function getName()
// c) Create a class named Student that inherits from Person
// d) Override the getName() function in Student
// e) Create a class named Professor that inherits from Person
// f) Override the getName() function in Professor
// g) In the main() function:
// ? Create objects of Student and Professor
// ? Use a Person class pointer to call the getName() function
// ? Display the names of Student and Professor using runtime polymorphism
