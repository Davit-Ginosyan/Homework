#include <iostream> 
using namespace std;

int main()
{
    int arr[19];
    cout << "Enter 19 array elements:" << endl;
    for(int i = 0; i < 19; ++i)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for(int i = 1; i < 19; ++i)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    for(int i = 0 ; i < 19 ; ++i)
    {
        if(arr[i] % 2 == 0)
        {
            arr[i] = max;
        }
    }
    
}