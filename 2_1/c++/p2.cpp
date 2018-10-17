#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int tmp=0;

    for (int i = 0; i < n-1; ++i) {
        for (int j = i; j < n-1; ++j) {
            if(arr[j]<arr[j+1])
            {
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] <<" ";
    }
    return 0;
}