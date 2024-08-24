#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n = 5;
    // vector<int> arr = {5,4,3,2,1};
    int arr[5] = {5, 4, 3, 2, 1};
    cout << "\nELements before sorting:\n";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }

    int i, j, temp;

    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
    // sort(arr.begin(),arr.end());
    cout << "\nELements after sorting:\n";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}