#include <iostream>
using namespace std;

int main()
{
    int arr[15];
    int positive = 0,negative = 0,zero = 0;
    cout << "Enter 15 array elements:" << endl;
    for(int i = 0; i < 15; ++i)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 15; ++i)
    {
        if(arr[i] > 0){positive++;}
        if(arr[i] < 0){negative++;}
        if(arr[i] == 0){zero++;}
    }
    cout << "zero: " << zero <<endl;
    cout << "positive: " << positive <<endl;
    cout << "negative: " << negative <<endl;
}