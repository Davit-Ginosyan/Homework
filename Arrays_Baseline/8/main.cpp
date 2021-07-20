#include <iostream>
using namespace std;

int main()
{
    double arr[16];
    int max_index = 0;
    int min_index = 0;
    cout << "Enter 16 array elements:" << endl;
    for(int i = 0; i < 16; ++i)
    {
        cin >> arr[i];
    }
    double max = arr[0];
    double min = arr[0];
    for(int i = 1; i < 16; ++i)
    {
        if(max < arr[i])
        {
            max = arr[i];
            max_index = i;
        }
        if(min > arr[i])
        {
            min = arr[i];
            min_index = i;
        }
    }

    cout << "max index: " << max_index << endl;
    cout << "min index: " << min_index << endl;
}