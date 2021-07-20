#include <iostream> 
using namespace std;

void sort_max(int* arr)
{
    for(int i = 0; i < 14; ++i)
    {
        int j = i;
        for(int k = j+1; k < 15; ++k)
        {
            if(arr[j] > arr[k])
            {
                swap(arr[j],arr[k]);
            }
        }
    }
}

void sort_min(int* arr,int x)
{
    for(int i = x; i < 15; ++i)
    {
        int j = i;
        for(int k = j+1; k < 15; ++k)
        {
            if(arr[j] < arr[k])
            {
                swap(arr[j],arr[k]);
            }
        }
    }
}


int main()
{
    int Z[15];
    int count = 0;
    cout << "Enter 15 array elements :" << endl;
    for(int i = 0; i < 15; ++i)
    {
        cin >> Z[i];
    }
    int k = 0;
    sort_max(Z);
    for(int i = 0; i < 15; ++i)
    {
        if(Z[i] < 0)
        {
            ++k;
        }
        else
        {
            break;
        }
    }

    sort_min(Z,k);
    for(int i = 0; i < 15; ++i)
    {
        cout << Z[i] << " ";
    }
} 