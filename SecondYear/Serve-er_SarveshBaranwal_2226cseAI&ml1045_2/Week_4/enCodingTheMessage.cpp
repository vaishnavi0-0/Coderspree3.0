#include <bits/stdc++.h> 
string encode(string &message)

{

    int n = message.size();

    string ans = "";

    for (int i = 0; i < n;) {

        int cnt = 1;

        ans += message[i];

        for (int j = i + 1; j < n && message[j] == message[i]; ++j) {

            cnt++;

        }

        ans += to_string(cnt);

        i += cnt;

    }

    return ans;

}