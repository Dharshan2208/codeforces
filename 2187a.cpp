#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        vector<long long> a(n),b(n);
        for(int i = 0;i < n;i++)cin >> a[i];
        b = a;
        sort(b.begin(),b.end());

        if(a == b){
            cout << -1 << "\n";
            continue;
        }

        long long mx = b[n-1];
        long long mn = b[0];
        long long ans = LLONG_MAX;

        for(int i = 0;i < n;i++){
            if(a[i] != b[i]){
                long long curr = max(a[i] - mn,mx-a[i]);
                ans = min(curr,ans);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
