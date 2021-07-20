#include <iostream>  
using namespace std;

int main()
{
    double M[12];
    int count = 0;
    cout << "Enter 12 array elements:" << endl;
    for(int i = 0; i < 12; ++i)
    {
        cin >> M[i];
    }
    int min = 0;
    for(int i = 1; i < 12 ; ++i)
    {
        if(M[min] > M[i])
        {
            min = i;
        }
    }
    M[min] = M[min] * 3;
    swap(M[min], M[11]);
    for(int i = 0; i < 12; ++i)
    {
        cout << M[i] << " ";
    }
}
