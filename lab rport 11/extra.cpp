#include<iostream>
using namespace std;
class BankAccount{
	public:
		virtual void calculateInterest() = 0;	
};
class SavingsAccount:public BankAccount{
	public:
		void calculateInterest() override{
			double amount = 185600;
			double interest = amount * 0.06;
		cout<<"Saving Account "<<endl;
        cout<<"Amount: "<<amount<<endl;
        cout<<"Interest : "<<interest<<endl;
		}	
};
class FixedDeposit:public BankAccount{
	public:
		void calculateInterest() override{
			double amount = 15360;
			double interest = amount * 0.08;
		cout<<"Fixed Account "<<endl;
        cout<<"Amount: "<<amount<<endl;
        cout<<"Interest : "<<interest<<endl;
		}	
};
int main(){
	 BankAccount *bkkc;
	 bkkc = new SavingsAccount;
	 bkkc->calculateInterest();
	 cout<<endl;
	 bkkc = new FixedDeposit;
	 bkkc->calculateInterest(); 
	return 0;
}


//Create a base class BankAccount with a virtual function calculateInterest(). Derive
//SavingsAccount and FixedDeposit that override calculateInterest() with different rates.
//Display results using a base class pointer.

