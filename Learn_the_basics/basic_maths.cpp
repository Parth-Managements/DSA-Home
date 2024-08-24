// #include <iostream>
// #include <Math.h>
// #include <algorithm>
// #include <stack>
// #include <string.h>
// using namespace std;

// int gcd(int n1, int n2)
// {
//     if (n1 == 0 || n2 == 0)
//     {
//         if (n1 == 0)
//             return n2;
//         else
//             return n1;
//     }
//     else
//         gcd(max(n1, n2) - min(n1, n2), min(n1, n2));
// }

// int main()
// {
//     int n = 36;
//      for(int i=1;i<=n;i++)
//      {
//          if(n%i==0)
//          {
//              cout << endl << i;
//          }
//      }
//      for (int i = 1; i <= sqrt(n); i++)
//      {
//          if (n % i == 0)
//          {
//              cout << endl
//                   << i;
//              if ((n / i) != i)
//              {
//                  cout << endl
//                       << n/i;
//              }
//          }
//      }
//     cout << gcd(20, 15);
// }
