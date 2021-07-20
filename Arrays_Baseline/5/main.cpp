#include <iostream>
using namespace std;

int main()
{
    int arr[9];
    int min_count = 0;
    int max_count = 0;
    cout << "Enter 9 array elements:" << endl;
    for(int i = 0; i < 9; ++i)
    {
        cin >> arr[i];
    }
    int max_elem = arr[0];
    int min_elem = arr[0];

    for(int i = 1; i < 9; ++i )
    {
        if(max_elem < arr[i])
        {
            max_elem = arr[i];
            max_count = i;
        }
        if(min_elem > arr[i])
        {
            min_elem = arr[i];
            min_count = i;
        }
    }

    swap(arr[min_count],arr[max_count]);
    for(int i = 0; i < 9; ++i)
    {
        cout << arr[i] << " ";
    }
}
