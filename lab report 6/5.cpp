//Create a class Citizen with member variables name, age, and cnic. name should be public,
//age should be private, and cnic should be protected. Add suitable member functions to
//access and display these members. Then, create a derived class PakistaniCitizen and
//demonstrate the usage of all access specifiers in the main() function.

#include<iostream>
using namespace std;
class Citizen{
	public:
		string name;
	private:
	    int age;
	protected:
	string CNIC;
	public:
	void getdata(){
		cout<<" Name is : "<<endl;
		cin>>name;
		cout<<" Age is : "<<endl;
		cin>>age;
		cout<<" CNIC is : "<<endl;
		cin>>CNIC;
	}
	void setdata(){
		cout<<" Name is : "<<name<<endl;
		cout<<" Age is : "<<age<<endl;
		cout<<" CNIC is : "<<CNIC<<endl;
	}	
};
class PakistaniCitizen:public Citizen{
	public:
		void display(){
			cout<<"Pakistani Citizen "<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"CNIC: "<<CNIC<<endl; 
		}
};
int main(){
	PakistaniCitizen pkc;
	pkc.getdata();
	pkc.setdata();
	pkc.display();
	return 0;
}
