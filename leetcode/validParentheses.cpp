//((s[i] == '{' || s[i + 1] == '}') || (s[i] == '[' || s[i + 1] == ']') || (s[i] == '(' || s[i + 1] == ')'))

#include <iostream>
using namespace std;
bool main()
{
    string s;
    int i = 0;

    cout << "Enter parentheses to check : "; // Enter only parentheses.
    cin >> s;

    if (((s[i] == '{' || s[i + 1] == '}') || (s[i] == '[' || s[i + 1] == ']') || (s[i] == '(' || s[i + 1] == ')')) )
    {
        return true;
    }
    else
        return false;
}