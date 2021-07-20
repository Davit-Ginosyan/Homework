#include <iostream> 
using namespace std;


int main()
{
    double X[12];
    cout << "Enter 12 array elements :" << endl;
    for(int i = 0; i < 12; ++i)
    {
        cin >> X[i];
    }


    double Y[12];
    cout << "Enter 12 array elements :" << endl;
    for(int j = 0; j < 12; ++j)
    {
        cin >> Y[j];
    }

    for(int i = 0; i < 12; ++i )
    {
        for(int j = 0; j < 12; ++j)
        {
            if(X[i] == Y[j])
            {
                X[i] = 0;
               
            }
        }

    }
    for(int i = 0 ;i < 12; ++i)
    {
        cout<< X[i] << " ";
    }
}