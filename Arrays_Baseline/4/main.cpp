#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int count = 0; 
    cout << "Enter 10 array elements:" << endl;
    for(int i = 0; i < 10; ++i)
    {
        cin >> arr[i];
    }
    int max_elem = arr[0];
    for(int i = 1; i < 10 ; ++i)
    {
        if(max_elem < arr[i])
        {
            max_elem = arr[i];
            count = i;
        }
    }
    swap(arr[0],arr[count]);
    for(int i = 0 ; i < 10; ++i)
    {
        cout << arr[i] << " ";
    }
}