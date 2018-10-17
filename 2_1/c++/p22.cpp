#include <utility>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

class Student{
    string name;
    int *mark;
public:
    Student(string name,int roll,int *mark):name(move(name)),mark(mark){}

    float findgpa(int i) {
        if(i>=80)
            return 5.00;
        else if(i<80 && i>=70)
            return 4.00;
        else if(i<70 && i>=60)
            return 3.50;
        else if(i<60 && i>=50)
            return 3.00;
        else if(i<50 && i>=40)
            return 2.50;
        else
            return 0.00;
    }

    void print()
    {
        cout << "Name: "<<name << endl;
        int total=0,avg=0;float gpa=0;
        for (int i = 0; i < 3; ++i) {
            total+=mark[i];
            gpa+=findgpa(mark[i]);
        }
        cout << "Total: "<< total <<endl;
        cout << "Average: "<< total/3 <<endl;
        cout << "Gpa: "<< gpa/3 <<endl << endl;

    }

};
int main()
{
    ifstream input("test.txt");
    vector<Student> v;
    string name;int roll;
    while (!input.eof())
    {
        int *mark=new int[3];
        input >> name >> mark[0] >> mark[1] >> mark[2];
        Student s(name,roll,mark);
        v.push_back(s);
    }


    for(Student &s:v)
    {
        s.print();
    }
    return 0;
}
