#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n+1);
        for (int i = 1; i <= n; ++i) cin >> a[i];
        ll ans = 0;
        for (int i = 1; i <= n; ++i) {
            if (a[i] > n) continue;               // impossible to satisfy
            // iterate j = i + a[i]*k
            for (int j = i + (int)a[i]; j <= n; j += (int)a[i]) {
                int k = (j - i) / (int)a[i];     // k >= 1
                if (a[j] == k) ++ans;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
