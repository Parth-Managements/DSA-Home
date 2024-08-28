#include <iostream>
#include <stack>
#include <algorithm>
#include <math.h>
using namespace std;

string postfixToprefix(string s)
{
    stack<string> st;

    for (int i = 0; i < s.length(); i++)
    {

        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
            st.push(string(1, s[i]));
        else
        {
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            st.push(string(1, s[i]) + t2 + t1);
        }
    }
    return st.top();
}
int main()
{
    string exp = "pq+mn-*";
    cout << "Postfix expression: " << exp << endl;
    cout << postfixToprefix(exp);
    return 0;
}
