#include<iostream>
using namespace std;
int main()
{

    int arr[50], size, i, pos;
    cout<<"Enter Array Size : ";
    cin>>size;
    cout<<"Enter array elements : ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : \n";
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nDelete which position (Enter index number) ? ";
    cin>>pos;
    size--;
    for(i=pos; i<size; i++)
    {
        arr[i]=arr[i+1];
    }
    cout<<"Element deleted..\n";
    cout<<"Now the new array is : \n";
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}