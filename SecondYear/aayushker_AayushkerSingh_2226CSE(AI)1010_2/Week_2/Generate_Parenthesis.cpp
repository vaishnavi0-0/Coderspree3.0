#include<bits/stdc++.h>
using namespace std;

vector<string>ans;
void solve(int n, string &s, int start, int end){
        if(start == end and start == n - 1){
            ans.push_back(s);
            return;
        }
        if(start < n){
            s.push_back('(');
            solve(n, s, start + 1, end);
            s.pop_back();

        }
        if(start > end){
            s.push_back(')');
            solve(n, s, start, end + 1);
            s.pop_back();
        }
    }
vector<string> validParenthesis(int n){
    // Write your code here.
    ans.clear();
        ans.resize(0);
        string s;
        solve(n+1, s, 0, 0);
        return ans;
}