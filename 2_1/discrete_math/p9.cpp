#include <iostream>
#include <cstdio>


using namespace std;

//6
//4 48
//5 100
//7 294
//10 900
//11 1210
//13 2028
//15

int main()
{
    freopen("input.txt", "r", stdin);
    int n;float x;
    cout << "Enter the number of data";
    cin >> n;
    float mat[n][n+1];
    for (int i = 0; i < n; ++i) {
        cout << "Enter x & y for " <<i <<": ";
        cin >> mat[i][0] >> mat[i][1];
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j <= n-i; ++j) {
            mat[j-1][i+1]=(mat[j][i]-mat[j-1][i])/(mat[i+j-1][0]-mat[j-1][0]);
        }
    }

    cout << "\nThe backward Difference table is: " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= n-i; ++j) {
            cout.width(4);
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n\nEnter the value where interpolation is requird: ";
    cin >>x;


    cout << "\nU is " << x << endl;

    double result=0;
    for (int i = 0; i < n; ++i) {
        float temp=1;
        for (int j = 0; j < i; ++j) {
            temp*=x-mat[j][0];
        }
        result+=mat[0][i+1]*temp;
    }
    cout <<"Solution using Newton's divided difference Interpolation formula for unequal intervals: ";
    cout << result;
    return 0;
}