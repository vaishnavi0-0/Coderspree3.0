#include <bits/stdc++.h>
using namespace std;
int minAddToMakeValid(string s)
{
    stack<char> st;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else
        {
            if (st.empty())
            {
                count++;
                continue;
            }
            else if (s[i] == ')' && st.top() != '(')
                count++;

            st.pop();
        }
    }
    count += st.size();
    return count;
}
int main()
{
    string s;
    cout << "Enter the parenthesis string\n";
    cin >> s;
    cout << "Minimum brackets to add: " << minAddToMakeValid(s) << endl;
    return 0;
}