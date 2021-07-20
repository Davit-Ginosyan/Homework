#include <iostream>
using namespace std;

int main()
{
    int arr[15];
    int arithmetic_mean = 0; 
    cout << "Enter 15 array elements:" << endl;
    for(int i = 0; i < 15; ++i)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 15; ++i)
    {
        arithmetic_mean += arr[i];
    }
    arithmetic_mean = arithmetic_mean / 15;

    for(int i = 0; i < 15; ++i)
    {
        arr[i] = arr[i] - arithmetic_mean;
    }

    for(int i = 0; i < 15; ++i)
    {
        cout<< arr[i] << " ";
    }
}