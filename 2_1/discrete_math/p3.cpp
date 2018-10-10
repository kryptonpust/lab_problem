#include <iostream>

using namespace std;

//input.txt
//3
//1 2 3
//2
//1 2

void take_input(unsigned int a, int *set) {
    for (int i = 0; i < a; ++i) {
        cin >> set[i];
    }
}

int main() {
    //freopen("input.txt", "r", stdin);
    unsigned int a, b;
    cout << "Enter Size of set A";
    cin >> a;
    int setA[a];
    take_input(a, (int *) setA);
    cout << "Enter Size of set B";
    cin >> b;
    int setB[b], resultmat[a][b];
    take_input(b, (int *) setB);
    cout << "\nR={";
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            resultmat[i][j] = 0;
            if (setA[i] > setB[j]) {
                cout << "(" << setA[i] << "," << setB[j] << "),";
                resultmat[i][j] = 1;
            }

        }
    }
    cout << "\b}";
    cout << "\nPrinting Matrix:" << endl;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cout.width(5);
            cout << resultmat[i][j];
        }
        cout << endl;
    }
    return 0;
}