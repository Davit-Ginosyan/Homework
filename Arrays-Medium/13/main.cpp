#include <iostream> 
using namespace std;

int main()
{
    int X[11];
    int count = 0;
    cout << "Enter 11 array elements: " << endl;
    for(int i = 0; i < 11; ++i)
    {
        cin >> X[i];
    }
    for(int i = 0; i < 11; ++i)
    {
        if(X[i] < 0 && X[i] % 2 != 0)
        {
            count += X[i];
        }
    }
    for(int i = 0; i < 11; ++i)
    {
        if(X[i] % 3 == 0)
        {
            X[i] = count;
        }
    }
    for(int i = 0; i < 11; ++i)
    {
        cout << X[i] << " ";
    }

}