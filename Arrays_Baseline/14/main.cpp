#include <iostream>
using namespace std;

int main()
{
    int arr[17];
    int odd = 0;
    int count = 0;
    cout << "Enter 17 array elements:" << endl;
    for(int i = 0; i < 17; ++i)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 17; ++i)
    {
        if(arr[i] % 2)
        {
            count += arr[i];
        }
    }

    for(int i = 0; i < 17; ++i)
    {
        if(arr[i] % 3 == 0)
        {
            arr[i] = count;
        }
    }

    for(int i = 0; i < 17; ++i)
    {
        cout << arr[i] << " ";
    }
}
