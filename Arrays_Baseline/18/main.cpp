#include <iostream>
using namespace std;

int main()
{
    double arr[12];
    cout << "Enter 12 array elements:" << endl;
    for(int i = 0; i < 12; ++i)
    {
        cin >> arr[i];
    }
    double max = arr[0];
    double min = arr[0];

    for(int i = 1; i < 12; ++i)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
        if(min > arr[i])
        {
            min = arr[i];
        }
    }

    cout << "[ "<< min << " ; " << max << " ]";
}