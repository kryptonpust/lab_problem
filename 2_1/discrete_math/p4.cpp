//SHORTEST PATH (WARSHALL'S ALGORITHM)
#include <iostream>
#include <cstdio>

using namespace std;

#define infinity 9999

int main() {

//    input.txt
//    4
//    7
//    1 1 7
//    1 2 5
//    2 1 7
//    2 4 2
//    3 2 3
//    4 3 1
//    4 1 4
    //for file input
    //freopen("input.txt", "r", stdin);
    unsigned int n, e;
    cout << "Enter number of Vertices: ";
    cin >> n;
    int mat[n][n];

    cout << "\nEnter number of Edges: ";
    cin >> e;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            mat[i][j] = infinity;
        }
    }

    for (int i = 0; i < e; ++i) {
        int x, y, w;
        cout << "Enter " << i + 1 << " edge and weight: ";
        cin >> x >> y >> w;
        mat[x - 1][y - 1] = w;
    }

    cout << "Input Matrix: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << endl;
        for (int j = 0; j < n; ++j) {
            cout.width(8);
            if (mat[i][j] == infinity) {
                cout << "INF";
            } else {
                cout << mat[i][j];
            }
        }
        cout << endl;
    }
    cout << endl;

    for (int k = 0; k < n; ++k) {

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);

        cout << "Matrix: " << k + 1 << endl;
        for (int i = 0; i < n; ++i) {
            cout << endl;
            for (int j = 0; j < n; ++j) {
                cout.width(8);
                if (mat[i][j] == infinity) {
                    cout << "INF";
                } else {
                    cout << mat[i][j];
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

