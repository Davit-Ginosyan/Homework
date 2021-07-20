#include <iostream> 
using namespace std;

int main()
{
    int arr[17];
    int count = 0;
    int arithmetic_mean  = 0;
    int add = 0;
    int current = 0;
    cout << "Enter 17 array elements:" << endl;
    for(int i = 0; i < 17; ++i)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < 17; ++i)
    {
        if(arr[i] > 0)
        {
            count++;
            arithmetic_mean += arr[i];
        }
    }
    arithmetic_mean = arithmetic_mean / count;
    for(int i = 0; i < 17; ++i)
    {
        if(arr[i] > 0 && arr[i] > arithmetic_mean)
        {
            current++;
            add += arr[i];
        }
        if(arr[i] < 0)
        {
            if((arr[i] * (-1)) > arithmetic_mean)
            {
                current++;
                add += (arr[i] * (-1));
            }
        }
        
    }
    cout << current << endl;
    cout << add << endl;
}