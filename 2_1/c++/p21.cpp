#include <utility>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

class Student{
    string name;
    int roll,mark;
public:
    Student(string name,int roll,int mark):name(move(name)),roll(roll),mark(mark){}
    void print()
    {
        cout << "Name: "<<name << endl;
        cout << "Roll: "<<roll << endl;
        cout << "Mark: "<<mark << endl <<endl;
    }
    int getmark()
    {
        return mark;
    }

};
int main()
{
    ifstream input("test.txt");
    vector<Student> v;
    string name;int roll,mark;
    while (!input.eof())
    {
        input >> name >> roll >> mark;
        Student s(name,roll,mark);
        v.push_back(s);
    }

    sort(v.begin(),v.end(),[](Student &a,Student &b){ return a.getmark() < b.getmark();});

    for(Student &s:v)
    {
        s.print();
    }
    return 0;
}
