#include <iostream> 
using namespace std;

int main()
{
    int arr[8];
    cout << "Enter 8 array elements ( two-digit numbers ):" << endl;
    for(int i = 0; i < 8; ++i)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < 8; ++i)
    {
        arr[i] = arr[i] % 10;
        cout << arr[i] <<endl;
    }
}