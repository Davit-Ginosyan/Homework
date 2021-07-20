#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int even = 0;
    int odd = 0; 
    cout << "Enter 20 array elements:" << endl;
    for(int i = 0; i < 20; ++i)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 20; ++i)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(even > odd){cout << "even" ;}
    if(even < odd){cout << "odd";}
    else
    {
        cout << "even == odd";
    }
}