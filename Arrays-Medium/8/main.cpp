#include <iostream> 
using namespace std;


int main()
{
    int R[9];
    cout << "Enter 9 array elements :" << endl;
    for(int i = 0; i < 9; ++i)
    {
        cin >> R[i];
    }
    int max = 0;
    for(int i = 0; i < 9; ++i)
    {
        if(i % 2 != 0 && R[i] > 0)
        {
            if(max < R[i])
            {
                max = R[i];
            }
        }
    }
    cout << max << endl;
}
