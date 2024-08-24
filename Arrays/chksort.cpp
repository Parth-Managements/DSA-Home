#include <iostream>
using namespace std;

bool chk(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            return false;
        }
    }
    return true;
}

bool chk2(int arr[], int n)// For rotated array
{
    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }

    if (arr[n - 1] > arr[0])
        count++;

    return count <= 1;
}

int main()
{
    int arr[4] = {7,8,5,6};
    cout << chk(arr, 4) << endl;
    cout << chk2(arr, 4);

}