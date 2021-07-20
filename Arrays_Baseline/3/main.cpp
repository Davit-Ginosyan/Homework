#include <iostream>
using namespace std;

int main()
{
    int arr[12];
    int arithmetic_mean = 0; 
    int count = 0;
    cout << "Enter 11 array elements:" << endl;
    for(int i = 0; i < 12; ++i)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 11; ++i)
    {
        arithmetic_mean += arr[i];
    }
    arithmetic_mean = arithmetic_mean / 11;
    for(int i = 0; i < 11; ++i)
    {
        if(arithmetic_mean <= arr[i])
        {
            count++;
        }
    }

    cout << count <<endl;
}