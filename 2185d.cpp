#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long n,m,h;
        cin >> n >> m >> h;

        // vector<long long> a(n),b(m),c(m);

        // for(int i = 0;i < n;i++)cin >> a[i];

        // for(int i = 0;i < m;i++)cin >> b[i] >> c[i];

        // vector<long long> temp(n);
        // temp = a;

        // for(int i = 0;i < m;i++){
        //     if(a[b[i]-1] + c[i] <= h){
        //         a[b[i]-1] += c[i];
        //     }else{
        //         a = temp;
        //     }
        // }

        // for(int i = 0;i < n;i++){
        //     cout << a[i] << " ";
        // }
        // cout << "\n";

        vector<long long> orig(n),cur(n);
        for (int i = 0; i < n; i++) {
            cin >> orig[i];
            cur[i] = orig[i];
        }

        long long max_val = *max_element(cur.begin(), cur.end());

        while (m--) {
            int b;
            long long c;
            cin >> b >> c;
            b--;

            if (cur[b] + c > h) {
                // crash
                cur = orig;
                max_val = *max_element(orig.begin(), orig.end());
            } else {
                cur[b] += c;
                max_val = max(max_val, cur[b]);
            }
        }

        for (auto x : cur) cout << x << " ";
        cout << "\n";

    }

    return 0;
}
