#include <iostream>

using namespace std;


//input.txt
//3
//1 0 1
//1 0 0
//0 1 0
//1 0 1
//0 1 1
//1 0 0
void take_input(unsigned int n, int *mat) {
    int input;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter " << i + 1 << ":" << j + 1 << " element: ";
            cin >> input;
            mat[i * n + j] = input;
        }
    }
}

void print(unsigned int n, int *mat) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout.width(5);
            cout << mat[i * n + j];
        }
        cout << endl;
    }
}

int main() {

    //freopen("input.txt", "r", stdin);
    cout << "Enter matrix dimension: ";
    unsigned int n;
    cin >> n;
    int mat1[n][n], mat2[n][n], result1[n][n], result2[n][n];
    cout << "Taking input for R1" << endl;
    take_input(n, (int *) mat1);
    cout << "Taking input for R2" << endl;
    take_input(n, (int *) mat2);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            result1[i][j] = mat1[i][j] | mat2[i][j];
            result2[i][j] = mat1[i][j] & mat2[i][j];
        }
    }
    cout << "\nPrinting MR1 | MR2:" << endl;
    print(n, (int *) result1);
    cout << "Printing MR1 & MR2:" << endl;
    print(n, (int *) result2);
    return 0;
}