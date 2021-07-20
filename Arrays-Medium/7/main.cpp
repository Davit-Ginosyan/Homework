#include <iostream> 
using namespace std;


int main()
{
    double count = 0;
    double current = 0;
    double Z[16];
    cout << "Enter 16 array elements :" << endl;
    for(int i = 0; i < 16; ++i)
    {
        cin >> Z[i];
    }

    for(int i = 0; i < 16; ++i)
    {
        if(i % 2 == 0)
        {
            count += Z[i];
        }
        if(i % 3 == 0)
        {
            current += Z[i]; 
        }
    }

    cout << count - current ;
}