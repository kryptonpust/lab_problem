#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outfile("test.txt");
    string s;
    int roll;
    cout << "Enter our name and roll: ";
    cin >> s >> roll;
    outfile << s << " " << roll;
    return 0;
}