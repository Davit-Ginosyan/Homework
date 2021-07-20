#include <iostream> 
using namespace std;

int main()
{
    int arr[15];
    int count = 0;
    cout << "Enter 15 array elements:" << endl;
    for(int i = 0; i < 15; ++i)
    {
        cin >> arr[i];
    }
    for( int i = 0; i < 15; ++i)
    {
        if(arr[i] > 0)
        {
            count += arr[i];
        }
    }
    for(int i = 0; i < 15; ++i)
    {
        arr[i] = arr[i] - count;
    }
    
}