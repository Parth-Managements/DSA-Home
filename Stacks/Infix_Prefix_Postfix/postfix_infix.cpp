#include <iostream>
#include <stack>
#include <algorithm>
#include <math.h>
using namespace std;

string postfixToinfix(string s)
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
            st.push("(" + t2 + string(1, s[i]) + t1 + ")");
        }
    }
    return st.top();
}
int main()
{
    string exp = "pq+mn-*";
    cout << "Infix expression: " << exp << endl;
    cout << postfixToinfix(exp);
    return 0;
}
