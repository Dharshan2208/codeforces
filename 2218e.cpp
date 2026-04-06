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

        long long ans = INT_MIN;
        vector<long long> a(n);

        for(int i = 0;i < n;i++)cin >> a[i];

        for(int i = 0;i < n;i++){
            for(int j = i+1;j < n;j++){
                ans = max(ans,a[i] ^ a[j]);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
