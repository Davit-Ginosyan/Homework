#include <iostream>
using namespace std;

int main()
{
    int arr[15];

    cout << "Enter 15 array elements:" << endl;
    for(int i = 0; i < 15; ++i)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    for(int i = 1; i < 15; ++i)
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
    cout << max + min << endl;
    cout << max - min << endl;
}