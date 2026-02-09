#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long n;
        char light;
        string s;

        cin >> n >> light;
        cin >> s;

        s = s+s;
        int next_g = -1;
        int ans = 0;

        if(light == 'g'){
            cout << 0 << "\n";
            continue;
        }

        for(int i = 2*n-1;i >= 0;i--){
            if(s[i] == 'g'){
                next_g = i;
            }

            if(s[i] == light && next_g != -1){
                ans = max(ans,next_g-i);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
