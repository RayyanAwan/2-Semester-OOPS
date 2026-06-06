//Define a base class Employee with private member variables name and salary, and a
//public method displayInfo() to display these details. Derive a class Manager from
//Employee, adding a protected member variable department. Further, derive a class
//Executive from Manager, adding a public method promote() to promote executives. Create
//objects of the Executive class and demonstrate accessing members from all three classes.

#include<iostream>
using namespace std;
class Employee{
	private:
		string name="Arham";
		double   salary=35000;
	public:
	void diaplayInfo(){
		cout<<"The name of the employee : "<<name<<endl;
		cout<<"The salary of the employee : "<<salary<<endl;
	}	
};
class Manager : public Employee{
	protected:
		string depart="Software Enginerring";
	public:
	void display(){
		cout<<"The Managet dep is : "<<depart<<endl;
	}	
};
class Exective :public Manager{
	public:
		void promote(){
			cout<<"to promote exectives"<<endl;
		}
};
int main(){
	Exective ex;
	ex.diaplayInfo();
	ex.display();
	ex.promote();
	return 0;
}
