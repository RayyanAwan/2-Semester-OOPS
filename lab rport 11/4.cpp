// Demonstrate the effect of a missing virtual destructor by first writing code without it and
// observing the problem, then fix it by adding virtual ~Base().

#include<iostream>
using namespace std;

class Honda{
	public :
		~Honda(){
			cout<<" Welcome to Honda company. "<<endl;
		}
};

class Employee:public Honda{
	public:
		~Employee(){
			cout<<" Hello! Employee "<<endl;
		}
};

int main(){
	Honda *hda= new Employee;
	delete hda;
	return 0;
}



#include<iostream>
using namespace std;

class Honda{
	public :
		virtual ~Honda(){
			cout<<" Welcome to Honda company. "<<endl;
		}
};

class Employee:public Honda{
	public:
		~Employee(){
			cout<<" Hello! Employee "<<endl;
		}
};

int main(){
	Honda *hda= new Employee;
	delete hda;
	return 0;
}


