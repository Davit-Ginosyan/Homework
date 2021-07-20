#include <iostream> 
using namespace std;


int main()
{
    int Z[10];
    int count = 0;
    int average = 0;
    cout << "Enter 10 array elements :" << endl;
    for(int i = 0; i < 10; ++i)
    {
        cin >> Z[i];
        average += Z[i];
    }
    average = average / 10;
    for(int i = 0; i < 10; ++i)
    {
        if(Z[i] > average)
        {
            count++;
        }
    }

    cout << (count * 10) << "%" ;

}