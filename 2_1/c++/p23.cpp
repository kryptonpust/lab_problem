#include <iostream>
using namespace std;


class Student{

public:
    string name;
    Student(){};
    Student(string name):name(name){};
};

int main()
{
    Student student[3]={Student("abc"),Student("def"),Student("ghi")};
    for (int i = 0; i < 3; ++i) {
        cout << "Name "<< i+1<<": "<<student[i].name <<endl;
    }
    return 0;
}