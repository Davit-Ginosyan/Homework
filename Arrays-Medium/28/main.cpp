#include <iostream> 
using namespace std;


int main()
{
    int Z[10];
    int count = 0;
    int current = 0;
    cout << "Enter 10 array elements :" << endl;
    for(int i = 0; i < 10; ++i)
    {
        cin >> Z[i];
    }
    for(int i = 0; i < 10; ++i)
    {
        if(i % 2 == 0)
        {
            count += Z[i];
        }
        else
        {
            current += Z[i];
        }
    }
    cout <<  current % count ;

}