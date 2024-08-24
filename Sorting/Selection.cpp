#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {5, 4, 3, 2, 1};
    cout << endl
         << "Elements before sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
    cout << endl
         << "Elements after sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}