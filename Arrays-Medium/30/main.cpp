#include <iostream> 
using namespace std;


int main()
{
    double Z[10];
    cout << "Enter 10 array elements :" << endl;
    for(int i = 0; i < 10; ++i)
    {
        cin >> Z[i];
    }
    int max_Z = Z[0];
    int count_Z = 0;
    double X[10];
    cout << "Enter 10 array elements :" << endl;
    for(int i = 0; i < 10; ++i)
    {
        cin >> X[i];
    }
    int max_X = X[0];
    int count_X = 0;
    for(int i = 1; i < 10; ++i)
    {
        if(max_Z < Z[i] )
        {
            max_Z = Z[i];
            count_Z = i;
        }
    }
    for(int i = 1; i < 10; ++i)
    {
        if(max_X < X[i] )
        {
            max_X = X[i];
            count_X = i;
        }
    }
    Z[count_Z] = max_X;
    X[count_X] = max_Z;
    
}