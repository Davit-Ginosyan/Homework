#include <iostream>
using namespace std;
void sorting(double*);

int main()
{
    double arr[12]; 
    cout << "Enter 12 array elements:" << endl;
    for(int i = 0; i < 12; ++i)
    {
        cin >> arr[i];
    }

    sorting(arr);

        cout << arr[0] + arr[11] ;
}

void sorting(double *arr)
{
    
    for(int i = 0; i < 11 ; ++i)
    {
        int j = i;
        for(int k = j+1; k < 12; ++k)
        {
            if(arr[j] < arr[k])
            {
                swap(arr[j],arr[k]);
            }
        }
    }    
   
}
