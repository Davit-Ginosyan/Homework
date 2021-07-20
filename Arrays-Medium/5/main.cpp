#include <iostream> 
#include <vector>
using namespace std;
void sort_max(int* arr)
{
    for(int i = 0; i < 9; ++i)
    {
        int j = i;
        for(int k = j+1; k < 10; ++k)
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
    int X[10];
    cout << "Enter 10 array elements :" << endl;
    for(int i = 0; i < 10; ++i)
    {
        cin >> X[i];
    }

    vector<int> tmp;
    int Y[10];
    cout << "Enter 10 array elements :" << endl;
    for(int j = 0; j < 10; ++j)
    {
        cin >> Y[j];
    }

    sort_max(X);
    sort_max(Y);
   
    for(int i = 0, j = 0; i < 10 && j < 10; )
    {
        if(X[i] == Y[j])
        {
            tmp.push_back(X[i]);
            ++i;
            ++j;
        }
        if(X[i] > Y[j])
        {
            j++;
        } 
        if(X[i] < Y[j])
        {
            ++i;
        }
    }

    int S[tmp.size()];
    for(int i = 0; i < tmp.size(); ++i)
    {
        S[i] = tmp[i];
    }
    cout << endl;
    for(int i = 0 ; i < tmp.size(); ++i)
    {
        cout << S[i] << endl;
    }

}