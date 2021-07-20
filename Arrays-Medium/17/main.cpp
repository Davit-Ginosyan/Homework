#include <iostream> 
using namespace std;

int main()
{
    int X[10];
    int count = 0;
    cout << "Enter 10 array elements :" << endl;
    for(int i = 0; i < 10; ++i)
    {
        cin >> X[i];
    }

    for(int i = 1; i < 9; )
    {
        if(X[i] < X[i-1] && X[i] < X[i+1])
        {
            count++;
            ++i;
        }
        else
        {
            ++i;
        }
    }
    cout << count ;
}