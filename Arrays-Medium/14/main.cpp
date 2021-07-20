#include <iostream> 
using namespace std;

int main()
{
    double X[14];
    cout << "Enter 14 array elements :" << endl;
    for(int i = 0; i < 14; ++i)
    {
        cin >> X[i];
    }
    int current = 0;
    for(int i = 0; i < 7; ++i)
    {
        swap(X[i],X[i + 7]);
        ++current;
    }
    for(int i = 0 ; i < 14; ++i)
    {
        cout << X[i] << " ";
    }
    cout << endl << current;
}