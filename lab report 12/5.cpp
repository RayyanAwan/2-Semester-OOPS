#include<iostream>
using namespace std;
class InvalidAgeException{
	private:
		int re;
	public:
		class age_Error{};
	void getadata(){
		cout<<" Enter the age : ";
		cin>>re;
	}		
	void setdata(){
		if(re < 0  || re > 120){
			throw age_Error{};
		}
		else{
			cout<<"You! entered valid age.";
		}
	}
};

int main(){
	try{
		InvalidAgeException Inva_ep;
		Inva_ep.getadata();
		Inva_ep.setdata();
	}
	catch(InvalidAgeException :: age_Error){
		cout<<" Invalid age "<<endl;
	}
	return 0;
}

//Create a simple custom exception class named 
//InvalidAgeException and use it to handle invalid age input.


