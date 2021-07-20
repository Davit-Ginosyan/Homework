#include <iostream> 
using namespace std;


int main()
{
    int Z[10];

    cout << "Enter 10 array elements (two-digit numbers) :" << endl;
    for(int i = 0; i < 10; ++i)
    {
        cin >> Z[i];
    }
    for(int i = 0; i < 10 ; ++i)
    {
        Z[i] = Z[i]/10 + Z[i]%10;
    }
    for(int i = 0; i < 10; ++i)
    {
        cout << Z[i] <<endl;
    }
}