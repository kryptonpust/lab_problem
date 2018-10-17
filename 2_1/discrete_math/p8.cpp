#include <iostream>
#include <cstdio>


float factorial(int i);

using namespace std;

//8
//1 1
//2 8
//3 27
//4 64
//5 125
//6 216
//7 343
//8 512
//7.5
int main()
{
    freopen("input.txt", "r", stdin);
    int n;float x;
    cout << "Enter the number of data";
    cin >> n;
    float mat[n][n+1];
    for (int i = 0; i < n; ++i) {
        cout << "Enter x & population y " <<i <<": ";
        cin >> mat[i][0] >> mat[i][1];
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j <= n-i; ++j) {
            mat[j-1][i+1]=mat[j][i]-mat[j-1][i];
        }
    }

    cout << "\nThe backward Difference table is: " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= n-i; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n\nEnter the value where interpolation is requird: ";
    cin >>x;

    float u=((float )x-mat[n-1][0])/(mat[1][0]-mat[0][0]);

    cout << "\nU is " << u << endl;

    double result=0;
    for (int i = 0; i < n; ++i) {
        float temp=1;
        for (int j = 0; j < i; ++j) {
            temp*=u+j;
        }
        result+=mat[n-i-1][i+1]*(temp/factorial(i));
    }
    cout <<"Solution using Newton-Gregory Formula for backward Interpolation: ";
    cout << result;
    return 0;
}

float factorial(int i) {
    return (i==1||i==0)? 1: i*factorial(i-1);
}