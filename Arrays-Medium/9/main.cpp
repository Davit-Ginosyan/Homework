#include <iostream> 
#include <cmath>
using namespace std;

void sort_min(int* arr)
{
   for(int i = 0; i < 29; ++i)
    {
        int j = i;
        for(int k = j+1; k < 30; ++k)
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
    int Z[30];
    int X[15];
    cout << "Enter 15 array elements :" << endl;
    for(int i = 0; i < 15; ++i)
    {
        cin >> X[i];
        Z[i] = X[i];
    }
    int Y[15];
    for(int i = 0; i < 15; ++i)
    {
        Y[i] = cos(X[i]*X[i]) + 2.97 * pow(log(pow(i,2)),2);
        Z[i+15] = Y[i];
    }
    
    sort_min(Z);
    for(int i = 0; i < 30; ++i)
    {
        cout << Z[i] << " ";
    }
}
