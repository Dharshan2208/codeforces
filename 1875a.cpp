#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long a,b;
        cin >> a >> b >> n;

        vector<long long> x(n);
        for(int i = 0;i<n;i++)cin >> x[i];

        long long ans=b;
        for(int i = 0;i < n;i++){
            ans += min(x[i],a-1);
        }

        cout << ans << "\n";
    }

    return 0;
}
