#include <iostream> 
using namespace std;

int main()
{
    int arr[19];
    int count = 0;
    int current = 0;
    cout << "Enter 19 array elements:" << endl;
    for(int i = 0; i < 19; ++i)
    {
        cin >> arr[i];
    }

    for(int i  = 0; i < 19; ++i)
    {
        if(arr[i] >= 0 )
        {
            count++;
        }
        else
        {
            break;
        }
    }

    if( count == 0 )
    {
        cout << "no negative elements ";
    }
    else
    {
        for(int i = 0; i < count; ++i)
        {
            current += arr[i];
        }
        cout << current << endl;
    }

}