#include<iostream>
using namespace std;

class BankAccount{
	public:
		virtual void deposit(double amount) = 0;
		virtual void withdraw(double amount) = 0;
		virtual double getBalance()=0;
};

class SavingAccount : public BankAccount{
	private:
		double balance;
	public:
		SavingAccount(){
			balance = 0;
		}
		void deposit(double amount){
			balance+= amount;
			cout<<"Deposite "<<amount<<endl;
		}
		
		void withdraw(double amount){
			if(balance>=amount){
				balance-=amount;
				cout<<"Yes! we withdraw easily"<<endl;
			}
			else{
				cout<<"Your Balance is insufficent "<<endl;
			}
		}
		
		double getBalance(){
			return balance;
		}
		
		void applyInterest(){
			balance= balance + (balance * 0.25);
			cout<<"Interest Applied "<<endl;
		}
};

class CheckingAccount: public BankAccount{
		private:
		double balance;
		double transition;
	public:
		CheckingAccount(){
			balance = 0;
			transition = 0;
		}
		void deposit(double amount){
			balance+= amount;
			transition ++;
			cout<<"Deposite "<<amount<<endl;
		}
		
		void withdraw(double amount){
			if(balance>=amount){
				balance-=amount;
				transition ++;
				cout<<"Yes! we withdraw easily"<<endl;
			}
			else{
				cout<<"Your Balance is insufficent "<<endl;
			}
		}
		
		double getBalance(){
			return balance;
		}
		
		void deductTransactionFee(){
		if(transition > 5)
			balance -= 65;
		cout<<"FEES is Deduct "<<endl;			
		}
	
};

int main(){

cout<<"MY BANK_BAlANCE DETAILS "<<endl<<endl;
	SavingAccount sac;
	sac.deposit(12500);
	sac.withdraw(4560);
	sac.applyInterest();
	cout<<"Your! saving Balance "<<endl;
	sac.getBalance();

cout<<endl;

CheckingAccount chac;
chac.deposit(75000);
chac.withdraw(22000);
chac.deposit(1200);
chac.withdraw(550);
chac.deductTransactionFee();
cout<<"Remaining Balance : "<<chac.getBalance()<<endl;

	return 0;	
}



//Task 2: Create an abstract class named BankAccount. This class should declare the following
//pure virtual functions:
//? deposit(double amount)
//? withdraw(double amount)
//? getBalance()
//These functions will act as a common interface for all types of bank accounts.
//Next, create two derived classes named SavingsAccount and CheckingAccount that inherit from
//BankAccount and provide their own implementations of these functions.
//In the SavingsAccount class, implement the following behavior:
//? The deposit(double amount) function should add the given amount to the account
//balance.
//? The withdraw(double amount) function should check whether sufficient balance is
//available before deducting the amount.
//? The getBalance() function should return the current balance.
//? Additionally, define a function applyInterest() to apply interest to the balance.
//In the CheckingAccount class, implement the following behavior:
//? The deposit(double amount) and withdraw(double amount) functions should work
//similarly to those in the SavingsAccount class.
//? Maintain a count of the number of transactions performed.
//? Define a function deductTransactionFee() which deducts a transaction fee if the number
//of transactions exceeds a specified limit.
//Finally, in the main() function, create objects of both SavingsAccount and CheckingAccount,
//and use them to demonstrate the working of all the implemented functions.
