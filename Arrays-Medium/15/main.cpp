#include <iostream> 
using namespace std;

int main()
{
    double X[9];
    cout << "Enter 9 array elements (two-digit numbers):" << endl;
    for(int i = 0; i < 9; ++i)
    {
        cin >> X[i];
    }
    double S;
    cout << "Enter real number S:"<< endl;
    cin >> S;

    for(int i = 1; i < 9; ++i)
    {
        if( X[i-1] <= S && S <= X[i])
        {
            if(i <= 4)
            {
                cout << X[8] << " " << 8;
            }
            else
            {
                cout << X[0] << " " << 0;
            }
        }
    }
}