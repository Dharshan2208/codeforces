#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long n,x;
        cin  >> n >> x;

        vector<long> a(n),b(n),c(n),gains(n);
        for(int i = 0;i < n;i++) {
            cin >> a[i] >> b[i] >> c[i];
            gains[i] = b[i]*a[i] - c[i];
        }

        
        for(auto x : gains)cout << x << " ";
        cout << "\n";

    }

    return 0;
}
