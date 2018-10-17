#include <iostream>


using namespace std;

class Base{
public:
    virtual void getdata(int a,int b)
    {
        cout << "Output from base class :" << a << " " <<b;
    }

};
class Derived:public Base{
public:
    void getdata(int a,int b)
    {
        cout << "Output from derived class :" << a << " " <<b;
    }

};
int main()
{
    Derived d;
    d.getdata(5,10);
    return 0;
}
