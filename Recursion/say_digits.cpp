#include <iostream>
using namespace std;

void answer(string arr[] , int num)
{
    if(num == 0)
    {
        return;
    }
    int digit  = num%10;
    num = num/10;
    answer(arr , num);
    cout << arr[digit];
}
int main ()
{
    string number[10] = {"Zero" , "One" , "Two" , "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine"}; 
    answer(number , 123);
    
}