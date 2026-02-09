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

        int r = n-1;

        int ans = 0;
        for(int l = 0;l < n;l++){
            if(s[l] == '1' && s[r] == '0' || s[l] == '0' && s[r] == '1'){
                r--;
            }else{
                ans = r-l+1;
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
