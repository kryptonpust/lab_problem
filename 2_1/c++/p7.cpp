#include <utility>
#include <iostream>
#include <cstring>

using namespace std;


class student{

    string name;
    unsigned int roll;
    int mark;
public:
    student(string n, unsigned int r, int num) {
        name=n;
        roll=r;
        mark=num;
    }
    void display()
    {
        cout << "Student Name:" << name << endl;
        cout << "student Roll: "  << roll << endl;
        if(mark >=80)
            cout << "A+";
        else if(mark<80 && mark >=75)
            cout << "A";
        else
            cout << "F";

    }

};

int main()
{
    string name;
    int roll,mark;
    cout << "Enter Name Roll and mark: ";
    cin >> name >> roll >> mark;
    student s(name,roll,mark);
    s.display();
}

