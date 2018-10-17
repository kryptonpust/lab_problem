#include <iostream>

using namespace std;

class demo{
public:
    void print()
    {
        cout << "object to pointer" <<endl;
    }

};
int main()
{
    demo *d=new demo;
    d->print();
    return 0;
}
