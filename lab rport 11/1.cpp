//Create a base class Animal with a virtual function sound(). Derive Dog, Cat, and Bird
//classes that override sound(). Use a base class pointer array to call sound() on each object.

#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void sound(){
			cout<<"It's the animal. "<<endl;
		};
};

class Dog:public Animal{
	public:
		 void sound() override{
			cout<<"The Dog is Barking."<<endl;
		}
};

class Cat:public Animal{
	public:
		void sound() override{
			cout<<"The Cat is meoo."<<endl;
		}
};

class Bird:public Animal{
	public:
		 void sound() override{
			cout<<"The Bird is chirps."<<endl;
		}
};

int main(){
	Animal *aml[3];
	aml[0] = new Dog;
	aml[1] = new Cat;
	aml[2] = new Bird;
	
	cout<<"PET Details "<<endl;
	for(int t=0;t<3;t++){
		aml[t]->sound();
	}

	return 0;
}
