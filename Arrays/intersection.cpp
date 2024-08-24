#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr2 = {1, 2, 3, 6, 7, 8};
    vector<int> temp;
    int i = 0, j = 0;
    int n1 = arr1.size(), n2 = arr2.size();

    while (i < n1 && j < n2)
    {
        if (arr1[i] == arr2[j])
        {
            temp.push_back(arr1[i]);
            i++;
            j++;
        }
        else
        {
            if (arr1[i] < arr2[j])
                i++;
            else
                j++;
        }
    }

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
}