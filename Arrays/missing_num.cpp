#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 4, 5};
    int xor1 = 0, xor2 = 0;
    // for(int i=1;i<=arr.size();i++)
    // {
    //     xor1 = xor1^i;
    // }
    // for(int i=0;i<arr.size();i++)
    // {
    //     xor2 = xor2^arr[i];
    // }
    for (int i = 0; i < (arr.size()) - 1; i++)
    {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^ arr.size();
    int res = xor1^xor2;
    cout << res;
}