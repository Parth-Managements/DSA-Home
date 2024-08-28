#include <iostream>
#include <stack>
#include <algorithm>
#include <math.h>
using namespace std;

string prefixTopostfix(string s)
{
    stack<string> st;

    for (int i = s.length() - 1; i >= 0; i--)
    {

        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
            st.push(string(1, s[i]));
        else
        {
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            st.push(t1 + t2 + string(1, s[i]));
        }
    }
    return st.top();
}
int main()
{
    string exp = "*+pq-mn";
    cout << "Pretfix expression: " << exp << endl;
    cout << prefixTopostfix(exp);
    return 0;
}
