#include <iostream>  
using namespace std;

int main()
{
    double M[12];
    cout << "Enter 12 array elements:" << endl;
    for(int i = 0; i < 12; ++i)
    {
        cin >> M[i];
    }
    int min = 0;
    for(int i = 0; i < 12; ++i)
    {
        if(M[min] > M[i])
        {
            min = i;
        }
    }
    cout << M[min] + min ;

}