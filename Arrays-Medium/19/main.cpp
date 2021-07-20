#include <iostream> 
using namespace std;

int main()
{
    int Z[15];
    int count = 0;
    cout << "Enter 15 array elements :" << endl;
    for(int i = 0; i < 15; ++i)
    {
        cin >> Z[i];
    }
    for(int i = 0; i < 15; ++i)
    {
        if(Z[i] < 0)
        {
            for(int j = i+1; j < 15; ++j)
            {
                if(Z[j] == 0)
                {
                    goto st;
                }
                else
                {
                    count += Z[j];
                    cout << Z[j] << " ";
                }
            }
        }
    }
    st:
    cout << count << endl;
}