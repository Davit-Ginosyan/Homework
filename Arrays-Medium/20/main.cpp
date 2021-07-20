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
    int min = 0;
    for(int i = 1; i < 15; ++i)
    {
        if(Z[min] > Z[i])
        {
            for(int j = min + 1; j < 16; ++j)
            {
                if(Z[min] > Z[j])
                {

                    cout << min << " " ;
                    ++min;
                    ++i;
                }
                else
                {
                    cout << min <<" ";
                    break;
                }
            }
        }
        else
        {
            min = i;
        }
    }
}