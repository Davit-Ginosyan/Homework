#include <iostream>
using namespace std;

int main()
{
    int arr[12];
    int arithmetic_mean = 0; 
    cout << "Enter 12 array elements:" << endl;
    for(int i = 0; i < 12; ++i)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < 12; ++i)
    {
        arithmetic_mean += arr[i];
    }

    arr[4] = arithmetic_mean / 12;
    for(int i = 0 ; i < 12; ++i)
    {
        cout << arr[i] << " "; 
    }

}