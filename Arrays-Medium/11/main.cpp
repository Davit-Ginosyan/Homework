#include <iostream> 
using namespace std;

int main()
{
    int X[9];
    cout << "Enter 9 array elements (two-digit numbers):" << endl;
    for(int i = 0; i < 9; ++i)
    {
        cin >> X[i];
    }
    int Y[9];
    for(int i = 0; i < 9; ++i)
    {
        Y[i] = X[i] / 10 + X[i] % 10;
    }
    for(int i = 0; i < 9; ++i)
    {
        cout << Y[i] << " ";
    }
}