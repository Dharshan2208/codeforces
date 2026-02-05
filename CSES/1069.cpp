#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    string s;
    cin >> s;

    long long max_len = 1;
    long long curr = 1;

    for(int i = 1;i < s.length();i++){
        if(s[i] == s[i-1]){
            curr++;
        }else{
            max_len = max(curr,max_len);
            curr = 1;
        }
    }

    max_len = max(max_len,curr);
    cout << max_len << "\n";

    return 0;
}
