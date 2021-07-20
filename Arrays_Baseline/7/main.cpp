#include <iostream>
using namespace std;

int main()
{
    double arr[15];
    int count = 0;
    cout << "Enter 15 array elements:" << endl;
    for(int i = 0; i < 15; ++i)
    {
        cin >> arr[i];
    }
    for(int i = 1; i < 15; ++i)
    {
        if(arr[0] < arr[i])
        {
            count++;
        }
    }
    cout << count << endl;
}