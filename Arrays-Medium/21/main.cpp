#include <iostream> 
#include <vector>
using namespace std;

void sort_max(int* arr)
{
    for(int i = 0; i < 9; ++i)
    {
        int j = i;
        for(int k = j+1; k < 10; ++k)
        {
            if(arr[j] > arr[k])
            {
                swap(arr[j],arr[k]);
            }
        }
    }
}


int main()
{
    int Z[10];
    int count = 0;
    cout << "Enter 10 array elements :" << endl;
    for(int i = 0; i < 10; ++i)
    {
        cin >> Z[i];
    }
    int k = 0;
    sort_max(Z);

    for(int i = 0; i < 10; )
    {
            for(int j = 0; j < 10; )
            {
                if(Z[i] == Z[j])
                {
                    count++;
                    k = j;
                    ++j;
                }
                else
                {
                    ++j;
                }
            }
        if(count > 2)
        {
            for(int x = i; x <= k; ++x)
            {
                Z[x] = -1;
            }
        }
        count = 0;
        k = 0;
        ++i;
    }

    for(int i = 0 ; i < 10; ++i)
    {
        cout << Z[i] << " ";
    }
}