#include <iostream>
using namespace std;

void sort_max(double*);
void sort_min(double*);

int main()
{
    double arr[14];
    cout << "Enter 14 array elements:" << endl;
    for(int i = 0; i < 14; ++i)
    {
        cin >> arr[i];
    }

    sort_max(arr);
    sort_min(arr);

    for(int i = 0; i < 14; ++i)
    {
        cout << arr[i] << " ";
    }
}

void sort_max(double* arr)
{
    for(int i = 0; i < 6; ++i)
    {
        int j = i;
        for(int k = j+1; k < 7; ++k)
        {
            if(arr[j] > arr[k])
            {
                swap(arr[j],arr[k]);
            }
        }
    }
}

void sort_min(double* arr)
{
   for(int i = 7; i < 13; ++i)
    {
        int j = i;
        for(int k = j+1; k < 14; ++k)
        {
            if(arr[j] < arr[k])
            {
                swap(arr[j],arr[k]);
            }
        }
    }
} 
