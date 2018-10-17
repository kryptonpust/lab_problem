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


int main()
{
    Dog d;
    Animal *a;
    a=&d;
    a->sound();

    return 0;
}
