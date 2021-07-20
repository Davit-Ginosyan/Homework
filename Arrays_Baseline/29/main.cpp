#include <iostream>  
using namespace std;

int main()
{
    double M[18];
    int count = 1;
    int current = 0;
    cout << "Enter 18 array elements:" << endl;
    for(int i = 0; i < 18; ++i)
    {
        cin >> M[i];
    }
    for(int i = 0; i < 18; ++i)
    {
        if(M[i] > 0)
        {
            count *= M[i];
        }
        else
        {
            current += M[i];
        }
    }
    cout << count / current * (-1) ;
}