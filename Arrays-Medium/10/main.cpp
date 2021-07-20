#include <iostream> 
#include <cmath>
using namespace std;

void sort_min(int* arr)
{
   for(int i = 0; i < 16; ++i)
    {
        int j = i;
        for(int k = j+1; k < 17; ++k)
        {
            if(arr[j] < arr[k])
            {
                swap(arr[j],arr[k]);
            }
        }
    }
} 

void sort_max(int* arr)
{
    for(int i = 0; i < 16; ++i)
    {
        int j = i;
        for(int k = j+1; k < 17; ++k)
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
    int R[17];
    int X[17];
    cout << "Enter 17 array elements :" << endl;
    for(int i = 0; i < 17; ++i)
    {
        cin >> X[i];
    }
    int Y[17];
    for(int i = 0; i < 17; ++i)
    {
        if(cos(X[i]) > 0)
        {
            Y[i] = pow(X[i],3) - 7.5;
        }
        else
        {
            Y[i] = pow(X[i],2) - (5 * pow(M_E,sin(X[i])));
        }
    }
sort_min(X);
sort_max(Y);
    for(int i = 0,j = 0; i < 17; ++i)
    {
        if(i % 2 == 0)
        {
            R[i] = X[j];
        }
        else
        {
            R[i] = Y[j];
            j += 2;
        }
    }

     for(int i = 0; i < 17; ++i)
    {
        cout << X[i] << " ";
    }
    cout<<endl;
    for(int i = 0; i < 17; ++i)
    {
        cout << Y[i] << " ";
    }
    cout<<endl;
    for(int i = 0; i < 17; ++i)
    {
        cout << R[i] << " ";
    }
}