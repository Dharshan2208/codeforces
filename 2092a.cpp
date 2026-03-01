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

        vector<long long>a(n);
        for(int i = 0;i < n;i++)cin >> a[i];

        sort(a.begin(),a.end());
        long long ans = a[n-1] - a[0];

        cout << ans << "\n";
    }

    return 0;
}
