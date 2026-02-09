#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ans = 1;
        int curr = 1;
        for(int i = 1;i < n;i++){
            if(s[i] == s[i-1]){
                curr++;
            }else{
                curr = 1;
            }
            ans = max(ans,curr);
        }

        cout << ans+1 << "\n";
    }

    return 0;
}
