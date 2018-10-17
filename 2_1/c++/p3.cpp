#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter left triangle size: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            cout.width(2);
            cout <<"*";
        }
        cout<< endl;
    }
    return 0;
}