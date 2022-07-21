/*
((s[i] == '{' || s[i + 1] == '}') || (s[i] == '[' || s[i + 1] == ']') || (s[i] == '(' || s[i + 1] == ')'))
We use a stack (it's a LIFO structure)
if open bracket - push
if close bracket
- 1. is stack empty ?
- 2. is corresponding opening bracket available ? if yes then pop last open bracket.
*/

#include <iostream>
#include <stack>
using namespace std;

bool isValid(string p)
{
    stack<char> st;
    int n = p.size();
    char ch;
    for (int i = 0; i < n; i++)
    {
        if (p[i] == '{' || p[i] == '(' || p[i] == '[')
        {
            st.push(p[i]);
        }
        else
        {
            if (st.size() == 0)
                return false;

            ch = st.top();
            st.pop();

            if ((p[i] == '}' && ch == '{') || (p[i] == ']' && ch == '[') || (p[i] == ')' && ch == '('))
            {
                continue;
            }
            else
                return false;
        }
    }
    return st.empty();
}

int main()
{

    string s;
    cin >> s;
    cout << isValid(s);
    return 0;
}