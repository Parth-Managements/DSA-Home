#include<iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,2,1,2,4,1,5,6};
    
    //pre compute

    int hash[8] = {0};
    unordered_map<int , int> mpp;

    for(int i=0;i<10;i++)
    {
        hash[arr[i]]++;
        mpp[arr[i]]++;
    }

    for(auto it : mpp)
    {
        cout << endl << it.first << "->" << it.second ;
    }

    // cout << endl << "1 appears for " << hash[1] << " times";
    // cout << endl << "2 appears for " << hash[2] << " times";
    // cout << endl << "3 appears for " << hash[3] << " times";
    // cout << endl << "4 appears for " << hash[4] << " times";
    // cout << endl << "5 appears for " << hash[5] << " times";
    // cout << endl << "6 appears for " << hash[6] << " times";



}