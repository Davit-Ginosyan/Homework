#include <iostream> 
using namespace std;

int main()
{
    double X[12];
    int count = 0;
    cout << "Enter 12 array elements :" << endl;
    for(int i = 0; i < 12; ++i)
    {
        cin >> X[i];    
    }

    for(int i = 0; i < 11 ; ++i)
    {
        int j = i;
        for(int k = j+1; k < 12; ++k)
        {
            if(X[j] < X[k])
            {
                count++;
                swap(X[j],X[k]);
            }
        }
    }    
    cout << count ;
}