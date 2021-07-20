#include <iostream>
using namespace std;

void sort_max(double*);
void sort_min(double*);

int main()
{
    double arr[12];
    cout << "Enter 12 array elements:" << endl;
    for(int i = 0; i < 12; ++i)
    {
        cin >> arr[i];
    }

    int count1 = 0, count2 = 0;
    int max = arr[0], min = arr[0];
    for(int i = 0; i < 12; ++i)
    {
        if(max < arr[i])
        {
            max = arr[i];
            count1 = i;
        }
        if(min > arr[i])
        {
            min = arr[i];
            count2 = i;
        }
    }
    if(count1 >= count2){cout << count1 - count2-1 ;}
    else{ cout << count2 - count1-1; }

}