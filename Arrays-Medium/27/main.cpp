#include <iostream> 
using namespace std;


int main()
{
    int Z[10];
    int count = 0;
    cout << "Enter 10 array elements :" << endl;
    for(int i = 0; i < 10; ++i)
    {
        cin >> Z[i];
    }
    
    int current = 0;
    for(int i = 0; i < 10; ++i)
    {
        if( Z[i] < Z[i+1])
        {   
            count += 1;
        }
        else
        {
           
            if(count >= 1)
            {   
                current++;
            }
            count = 0;
        }


    }
    cout << current ;
}