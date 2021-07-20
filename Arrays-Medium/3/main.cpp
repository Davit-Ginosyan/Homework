#include <iostream> 
using namespace std;

int main()
{
    int arr[17];
    int current = 0;
    cout << "Enter 17 array elements ( two-digit numbers ):" << endl;
    for(int i = 0; i < 17; ++i)
    {
        cin >> arr[i];
    }
    for(int i = 0 ; i < 17; ++i)
    {
        current += arr[i] % 10;
        current += arr[i] / 10;
    }

    cout << current ;
}