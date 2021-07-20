#include <iostream> 
using namespace std;

int main()
{
    int X[10];
    int count = 0;
    int current = 0;
    cout << "Enter 10 array elements :" << endl;
    for(int i = 0; i < 10; ++i)
    {
        cin >> X[i];
    }
    for(int i = 0; i < 10; ++i)
    {
        if(X[i] >= 0 )
        {
            count++;
            current += X[i];
        }
        else
        {
            break;
        }
    }

    cout << count << endl << current ; 

}