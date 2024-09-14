#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string s = "()[]{}";
    stack<char> ans;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];

        if (c == '(' || c == '[' || c == '{') //([{
        {
            ans.push(c);
        }
        else if (c == ')')//)
        {
            if (ans.empty() || ans.top() != '(')
            {
                return false;
            }
            else
            {

                ans.pop();
            }
        }
        else if (c == ']')//]
        {
            if (ans.empty() || ans.top() != '[')
            {
                return false;
            }
            else
            {

                ans.pop();
            }
        }
        else if (c == '}') //}
        {
            if (ans.empty() || ans.top() != '{')
            {
                return false;
            }
            else
            {
                ans.pop();
            }
        }
    }

    if(ans.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}