#include <iostream>

using namespace std;

class Animal{
public:
    virtual void sound(){}
};
class Dog:public Animal{
public:
    void sound()
    {
        cout << "bark" <<endl;
    }
};
class Cat:public Animal{
public:
    void sound()
    {
        cout << "Meaow" <<endl;
    }
};

int main()
{
    Dog d;Cat c;
    Animal *a[2];
    a[0]=&d;
    a[1]=&c;
    a[0]->sound();
    a[1]->sound();

    return 0;
}
