#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking..." << endl;
    }
};
class BabyDog : public Dog
{
public:
    void weep()
    {
        cout << "Weeping..." << endl;
    }
};
int main()
{
    BabyDog d;
    d.weep();
    d.bark(); 
    d.eat(); 
    return 0;
}

