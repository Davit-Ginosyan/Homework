#include <iostream>  
using namespace std;

int main()
{
    double M[15];
    int count = 0;
    cout << "Enter 15 array elements:" << endl;
    for(int i = 0; i < 15; ++i)
    {
        cin >> M[i];
    }
    for(int i = 0; i < 7; ++i)
    {
        swap(M[i], M[14-i]);
    }
        for(int i = 0; i < 15; ++i)
    {
        cout << M[i] << " ";
    }

}