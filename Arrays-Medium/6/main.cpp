#include <iostream> 
#include <cmath>
using namespace std;


int main()
{
    double Y[12];
    double y[12];
    double arithmetic_mean  = 0;
    int count = 0;
    for(int i = 0; i < 12; ++i)
    {
        Y[i] = pow(i,2) - (2 * i) + 19.3*cos(i);
        arithmetic_mean  += Y[i] ;
    }

    arithmetic_mean = arithmetic_mean / 12;

    for(int i = 0; i < 12; ++i)
    {
        if(Y[i] < arithmetic_mean)
        {
            ++count;
        }
    }
    for(int i = 0; i < 12; ++i)
    {
        if(Y[i] < arithmetic_mean)
        {
            y[i] = Y[i];
        }
        else
        {
            y[count] = Y[i];
            count++;
        }
    }
        for(int i = 0 ; i < 12; ++i)
    {
        cout << Y[i] << " ";
    }
    cout << endl;
    for(int i = 0 ; i < 12; ++i)
    {
        cout << y[i] << " ";
    }

}