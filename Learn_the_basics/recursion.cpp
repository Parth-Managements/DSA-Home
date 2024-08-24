#include <iostream>
using namespace std;



// int print_to_n(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     else
//     {
//         printf("\n%d",n);
//         print_to_n(n-1);
//     }
// }

// int sum1(int n)//Functional way
// {
//     if(n==0) return 0;
//     return n + sum1(n-1);
// }

// int sum2(int i , int sum)//Functional way
// {
//     if(i<1)
//     {
//         return sum;
//     }
//     else
//     {
//         sum2(i-1,sum+i);
//     }
// }

/* int factorial1(int i ,int n)//parameterised way
// {
//     if(n==1)
//     {
//         return i;
//     }
//     else
//     {
//         return factorial1(i*n,n-1);
//     }
// }
*/
// int factorial2(int n)//functional way
// {
//     if(n==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * factorial2(n-1);
//     }
// }


// void reverse_arr(int i,int arr[],int n)
// {
//     if(i>=(n/2))
//     {
//         return;
//     }
//     else
//     {
//         swap(arr[i],arr[n-i-1]);
//         reverse_arr(i+1,arr,n);
//     }
// }

// bool validstring(int i , char arr[],int n)
// {
//     if(i>=n/2) return true;
//     if(arr[i] != arr[n-i-1]) return false;
//     validstring(i+1,arr,n);
// }

int fibo(int n)
{
    if(n<=1) return n;
    else
    {
        return fibo(n-1) + fibo(n-2);
    }
}

int main ()
{
    // int n , arr[5] = {1,2,3,4,5};
    // char arr[5] = {'m','a','d','a','m'};
    // cout << validstring(0,arr,5);
    // cout << "Enter any number";
    // cin >> n;
    // print_to_n(n);
    // int n2 = sum1(n);
    // cout << "\nSum1 = " << n2;
    // int n3 = sum2(n,0);
    // cout << "\nSum2 = " << n3;
    // int fact1 = factorial1(1,n);
    // cout << endl << "Factorial = " << fact1;
    // int fact2 = factorial1(1,n);
    // cout << endl << "Factorial = " << fact2;
    // reverse_arr(0,arr,5);
    // for(int i = 0;i<5;i++)
    // {
    //     cout << " "<< arr[i];
    // }
    // cout << fibo(4); 
}