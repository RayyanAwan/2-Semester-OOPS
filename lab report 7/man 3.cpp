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
class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Meowing..." << endl;
    }
};
int main()
{
    Cat c;
    c.meow();
    c.eat();
    return 0;
}

