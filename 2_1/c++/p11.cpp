#include <iostream>

using namespace std;


int main()
{
    int a,b;
    char sign;
    cout << "Enter (Value sign Value): ";
    cin >> a >> sign >> b;
    switch (sign)
    {
        case '+':{
            cout <<a+b;
            break;
        }
        case '-':{
            cout <<a-b;
            break;
        }
        case '*':{
            cout <<a*b;
            break;
        }
        case '/':{
            cout <<a/b;
            break;
        }
        default:{
            cout << "Wrong formatted input";
        }
    }
    return 0;
}
