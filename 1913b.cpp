#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        long ans = 0,zeros = 0,ones = 0;

        long n = s.size();
        for(char c : s){
            if(c == '0')zeros++;
            else ones++;
        }

        if(ones == zeros){
            cout << 0 << "\n";
        }else{
            for(int i = 0;i < n;i++){
                if(s[i] == '0' && ones > 0){
                    ones--;
                    ans++;
                }else if(s[i] == '1' && zeros > 0){
                    zeros--;
                    ans++;
                }else{
                    break;
                }
            }

            cout << n - ans << "\n";
        }
    }

    return 0;
}
