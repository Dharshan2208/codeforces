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

        vector<int> a(n);
        for(int i =0;i<n;i++)cin >> a[i];

        int ans = a[n-1] - a[0];

        // for max diff between random and first element
        for(int i = 1;i < n;i++){
            ans = max(a[i]-a[0],ans);
        }

        // for max diff between last and random element
        for(int i = 0;i < n;i++){
            ans = max(a[n-1]-a[i],ans);
        }

        // for max diff between consecutive elements
        for(int i = 0;i < n-1;i++){
            ans = max(a[i]-a[i+1],ans);
        }

        cout << ans << "\n";
    }
    return 0;
}