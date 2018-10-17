#include <iostream>


using namespace std;

class Calculate{
public:
    void cal(float len,float wid, float hei)
    {
        cout << "Volume area is: " << len*wid*hei << endl;
    }
    void cal(float len,float wid)
    {
        cout << "Area area is: " << len*wid << endl;

    }

};
int main()
{

    Calculate a;
    a.cal(50,7);
    a.cal(50,7,15);
    return 0;
}