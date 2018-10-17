#include <iostream>
#include <cstdio>


using namespace std;

//4
//5 12
//6 13
//9 14 11 16
//10

int main()
{
    freopen("input.txt", "r", stdin);
    int n;float x,sum=0;
    cout << "Enter the number of data";
    cin >> n;
    float mat[n][2];
    for (int i = 0; i < n; ++i) {
        cout << "Enter x & y for " <<i <<": ";
        cin >> mat[i][0] >> mat[i][1];
    }
    cout << "\n\nEnter value of x: ";
    cin >> x;

    for(int i=0;i<n;i++)
    {
        float temp = 1;
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                temp = temp * ((x-mat[j][0])/(mat[i][0]-mat[j][0]));
            }
        }
        sum+=mat[i][1]*temp;
    }
    cout <<"\nSolution using Lagrange’s interpolation formula for unequal intervals: " << sum;
    return 0;
}