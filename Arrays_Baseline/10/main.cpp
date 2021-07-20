#include <iostream>
using namespace std;

int main()
{
    int arr[17];
    int arithmetic_mean = 0; 
    int add = 0;
    int count = 0;
    cout << "Enter 17 array elements:" << endl;
    for(int i = 0; i < 17; ++i)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 17; ++i)
    {
        if(arr[i] < 0)
        {
            arithmetic_mean += arr[i];
            count++;
        }
    }
    arithmetic_mean = (arithmetic_mean / count )* (-1);


    for(int i = 0; i < 17; ++i)
    {
        if(arr[i] < 0)
        {
            arr[i] *= -1;
            if(arr[i] > arithmetic_mean)
            {
                add += arr[i];
            }
        }
        else if(arr[i] > arithmetic_mean)
        {
            add += arr[i];
        }
    }
    cout << add;
}