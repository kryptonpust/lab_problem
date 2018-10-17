#include <iostream>

using namespace std;

int main()
{
    int size, serach;
    cout<<"Enter Array Size : ";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements : ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to be Search : ";
    cin>>serach;
    for (int i = 0; i < size; ++i) {
        if(arr[i]==serach)
        {
            cout << "Found in Index: " << i;
        }

    }
    return 0;
}
