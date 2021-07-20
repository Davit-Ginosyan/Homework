#include <iostream> 
using namespace std;

int main()
{
    int arr_1[10];
    cout << "Enter 10 array elements:" << endl;
    for(int i = 0; i < 10; ++i)
    {
        cin >> arr_1[i];
    }

    int arr_2[10];
    cout << "Enter 10 array elements:" << endl;
    for(int i = 0; i < 10; ++i)
    {
        cin >> arr_2[i];
    }
    int arr_3[10];
    int j = 0;
    int k = 1;
    for(int i = 0 ; i < 10; ++i)
    {
        if(i % 2 == 0)
        {
            arr_3[i] = arr_1[k];
            k += 2;
        }
        else
        {
            arr_3[i] = arr_2[j];
            j += 2;
        }
    }    

    for(int i = 0; i < 10; ++i)
    {
        cout << arr_3[i] << " ";
    }
}