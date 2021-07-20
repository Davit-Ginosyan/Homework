#include <iostream>
using namespace std;

int main()
{
    int arr[14];
    int count = 0;
    cout << "Enter 14 array elements:" << endl;
    for(int i = 0; i < 14; ++i)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < 14; ++i)
    {
        if(arr[i] % 2 == 0)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}