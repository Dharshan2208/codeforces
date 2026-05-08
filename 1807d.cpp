#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long n,q;
        cin >> n >> q;

        vector<long> a(n+1),prefix(n+1);

        for(int i = 1;i <= n;i++){
            cin >> a[i];
            a[i] %= 2;
            prefix[i] = prefix[i-1] + a[i];
        }

        int total_parity = prefix[n] % 2;

        while(q--){
            long l,r,k;
            cin >> l >> r >> k;

            int len = r - l + 1;

            int old_parity = (prefix[r] - prefix[l-1])%2;
            int new_parity = (len % 2) * (k % 2);

            int final_parity = total_parity ^ old_parity ^ new_parity;

            if(final_parity){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }
    }

    return 0;
}
