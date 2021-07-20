#include <iostream>
using namespace std;

void Selection_Sort(int* arr,int size)
{
    int k = 0; 
    int min = 0;
    for(int i = 0; i < size; ++i)
    {
        for(int j = k; j < size; ++j)
        {
            if(arr[min] < arr[j])
            {
                min = j;
            }
        }
        swap(arr[i],arr[min]);
        ++k;
        min = k;
    }
}
