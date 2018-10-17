#include <iostream>


using namespace std;

class Area{
    int length,width;
public:
    Area(int length, int width) : length(length), width(width) {}
    void rectangular()
    {
        cout << "Rectangular area is: " << length*width << endl;
    }
    void square()
    {
        cout << "square area is: " << length*length << endl;

    }

};
int main()
{

    Area a(20,6);
    a.rectangular();
    a.square();
    return 0;
}