#include <iostream>
using namespace std;

int main ()
{
    int n=5;
    int arr[5] = {1,200,30,4,5};
    int max = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Largest element is : " << max;
}