// infix to postfix 1 try
#include<iostream>
#include<stack>
#include<algorithm>
#include<math.h>
using namespace std;

int priority(char st)
{
    if (st == '^')
        return 3;
    else if (st == '*' || st == '/')
        return 2;
    else if (st == '+' || st == '-')
        return 1;
    else
        return 0;
}

string infixToPostfix(string s)
{
    stack<char> st;
    string result;
    for (auto c : s)
    {

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;

        else if (c == ')')
            st.push(')');

        else if (c == '(')
        {
            while (st.top() != ')')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }

        else
        {
            while (!st.empty() && priority(c) < priority(st.top()))
            {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }
    // cout << "Postfix expression: " << result << endl;
    return result;
}

string infixToPrefix(string s)
{
    reverse(s.begin(), s.end());

    string prefix = infixToPostfix(s);

    reverse(prefix.begin(),prefix.end());

    return prefix;
}
int main()
{
    string exp = "(P+Q)+R/S/T"; 
    cout << "Infix expression: " << exp << endl;
    // infixToPostfix(exp);
    cout << infixToPrefix(exp);
    return 0;
}
