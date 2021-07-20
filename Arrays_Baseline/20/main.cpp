#include <iostream>  
using namespace std;

int main()
{
    int arr[16];
    int count = 0;
    cout << "Enter 16 array elements:" << endl;
    for(int i = 0; i < 16; ++i)
    {
        cin >> arr[i];
    }

    for(int i = 0 ; i < 16; ++i)
    {
        if(arr[i] % 3 == 0)
        {
            arr[i] = 0;
            ++count;
        }
    }
    cout << count << endl;
    
    for(int i = 0 ; i < 16; ++i)
    {
        cout << arr[i] << " ";
    }

}