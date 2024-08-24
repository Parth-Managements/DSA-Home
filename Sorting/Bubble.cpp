#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {5, 4, 3, 2, 1};
    cout << "\nElements before sorting : \n";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    cout << "\nElements after sorting : \n";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}