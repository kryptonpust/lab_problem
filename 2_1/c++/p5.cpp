#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("test.txt");
    string s;
    int roll;
    in >> s >> roll;
    cout << "Your name is: " << s << endl << "Your roll is: "<< roll;
    return 0;
}