#include <iostream>  
using namespace std;

int main()
{
    double M[12];
    int count = 0;
    int current = 0;
    cout << "Enter 12 array elements:" << endl;
    for(int i = 0; i < 12; ++i)
    {
        cin >> M[i];
    }

    for(int i = 0; i < 11; ++i)
    {
        if(M[i] < M[11])
        {
            count++;
            current += M[i];
        }
    }
    cout << count << endl;
    cout << current << endl;

}