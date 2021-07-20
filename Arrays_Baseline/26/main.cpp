#include <iostream>  
using namespace std;

int main()
{
    double M[15];
    int count = 1;
    int current = 1;
    cout << "Enter 15 array elements:" << endl;
    for(int i = 0; i < 15; ++i)
    {
        cin >> M[i];
    }
    for(int i = 0 ;i < 15; ++i)
    {
        if( M[i] > 0)
        {
            count *= M[i];
        }
        if( M[i] < 0)
        {
            current *= M[i];
        }
    }
    if(current < 0)
    {
        current *= -1;
    }
    cout << count - current << endl;
}