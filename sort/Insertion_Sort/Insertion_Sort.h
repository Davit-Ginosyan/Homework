
void Insertion_Sort(int* arr,int size)
{
    for(int j = 1; j < size; ++j)
    {
        int i = j - 1;
        int key = arr[j];
        while(arr[i] < key && i >= 0)
        {
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }
}
