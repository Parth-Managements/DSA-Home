#include <iostream>
#include <stack>
#include <algorithm>
#include <math.h>
using namespace std;

string postfixToinfix(string s)
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
            st.push("(" + t1 + string(1, s[i]) + t2 + ")");
        }
    }
    return st.top();
}
int main()
{
    string exp = "++PQ//RST";
    cout << "Infix expression: " << exp << endl;
    cout << postfixToinfix(exp);
    return 0;
}
