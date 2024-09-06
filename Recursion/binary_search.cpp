#include <iostream>
using namespace std;

void print(int arr[], int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
}

bool binarysearch(int *arr, int start, int end, int key)
{
    cout << endl;
    print(arr, start, end);
    if (start > end)
    {
        return false;
    }

    int mid = (start + end) / 2;
    cout << "Value of mid is " << arr[mid];
    if (arr[mid] == key)
        return true;
    else if (key > arr[mid])
    {
        return binarysearch(arr, mid + 1, end, key);
    }
    else
        return binarysearch(arr, start, mid - 1, key);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key = 6;
    cout << binarysearch(arr, 0, 4, key);
}