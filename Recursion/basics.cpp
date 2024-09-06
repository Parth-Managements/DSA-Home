#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n + sum(n-1);
}

void print(int n)
{
    if(n == 0)
    {
        return;
    }
    print(n-1);
}

int power(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return 2 * power(n-1);

}
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main ()
{
    // int fact = factorial(5);
    // cout << "Factorial = " << fact;
    // int sum2 = sum(5);
    // cout << "Sum = " << sum2;
    // print(5);
    // cout << power(3);
    // cout << fibonacci(3);

    //Homework


    
}