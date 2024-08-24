#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2,3,6,7,8};
    vector<int> temp;
    int i = 0, j = 0;
    int n1 = arr1.size(), n2 = arr2.size();

    while (i < n1 && i < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (temp.size() == 0 || temp.back() != arr1[i])
            {
                temp.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (temp.size() == 0 || temp.back() != arr2[j])
            {
                temp.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (temp.size() == 0 || temp.back() != arr1[i])
        {
            temp.push_back(arr1[i]);
        }
        i++;
    }

    while (j < n2)
    {
        if (temp.size() == 0 || temp.back() != arr2[j])
        {
            temp.push_back(arr2[j]);
        }
        j++;
    }

    for(int i=0;i<temp.size();i++)
    {
        cout << temp[i] << " ";
    }
}