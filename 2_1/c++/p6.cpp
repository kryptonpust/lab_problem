#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("test.txt",ios::in | ios::out);
    string s;
    int roll;
    cout << "Enter our name and roll: ";
    cin >> s >> roll;
    file << s << " " << roll;
    file >> s >> roll;
    cout << "Your name is: " << s << endl << "Your roll is: "<< roll;
    return 0;
}