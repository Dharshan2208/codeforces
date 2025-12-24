#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin  >> n;

        vector<long long> a(n);
        for(int i =0;i<n;i++)cin >> a[i];

        sort(a.begin(),a.end());

        int min_diff = a[1]-a[0];
        int min_elem = a[0];

        int ans = max(min_diff,min_elem);

        cout << ans  << "\n";
    }
    return 0;
}