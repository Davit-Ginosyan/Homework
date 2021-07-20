#include <iostream> 
using namespace std;

void sort_max(double*);

int main()
{
    double arr_3[16];
    double arr_1[9];
    cout << "Enter 9 array elements :" << endl;
    for(int i = 0; i < 9; ++i)
    {
        cin >> arr_1[i];
        arr_3[i] = arr_1[i];
    }

    double arr_2[7];
    cout << "Enter 7 array elements :" << endl;
    for(int i = 0; i < 7; ++i)
    {
        cin >> arr_2[i];
        arr_3[i+9] = arr_2[i];
    }

    sort_max(arr_3);
    for(int i = 0; i < 16; ++i)
    {
        cout << arr_3[i] << " ";
    }
}


void sort_max(double* arr)
{
    for(int i = 0; i < 15; ++i)
    {
        int j = i;
        for(int k = j+1; k < 16; ++k)
        {
            if(arr[j] > arr[k])
            {
                swap(arr[j],arr[k]);
            }
        }
    }
}