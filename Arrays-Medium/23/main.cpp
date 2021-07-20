#include <iostream> 
#include <cmath>
using namespace std;

int main()
{
    int X[10];
    cout << "Enter 10 array elements :" << endl;
    for(int i = 0; i < 10; ++i)
    {
        cin >> X[i];
    }

    double Y[10];
    for(int i = 0; i < 10 ;++i)
    {
        Y[i] = pow(X[i],2) + 0.3;
    }
    double P = 0;
    double p1 = 1;
    double p2 = 1;
    for(int i = 0; i < 10;++i)
    {
        if(i % 2 == 0)
        {
            p2 *= X[i] * Y[i];
        }
        else
        {
            p1 *= X[i] * Y[i];
        }
    }
    P = p1 / p2;
  
    cout << P <<endl;
}