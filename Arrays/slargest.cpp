#include <iostream>
using namespace std;

int main ()
{
    int n=5;
    int arr[5] = {1,200,30,40,5};
    int max = arr[0];
    int slargest = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i] > max)
        {
            slargest = max;
            max = arr[i];
        }
        else if (arr[i] > slargest && arr[i] < max)
        {
            slargest = arr[i];
        }
    }

    cout << "Second Largest element is : " << slargest;
}