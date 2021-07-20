#include <iostream>

void Bubble_Sort(int* arr,int size)
{
    for(int i = 0; i < size; ++i)
    {
        for(int j = size-1;j >= 1; --j)
        {
            if(arr[j] > arr[j-1])
            {
               std::swap(arr[j],arr[j-1]);
            }
        }
    }
}

