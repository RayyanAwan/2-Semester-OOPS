//Create a three-level inheritance hierarchy (Animal ->gt; Mammal ->gt; Dog) where describe() is
//virtual. Show that the most derived override is always called at runtime.

#include<iostream>
using namespace std;

class Animal{
public:
    virtual void describe(){
        cout<<" Charteristics of Animals. "<<endl;
    }
};

class Mammal : public Animal{
public:
    void describe() override{
        cout<<" Mammals are true survivors. "<<endl;
    }
};

class Dog : public Mammal{
public:
    void describe() override{
        cout<<"DOG is the type of animals. "<< endl;
    }
};

int main(){
    Animal *mla;
    mla = new Dog();
    mla->describe();

    return 0;
}
