#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long n,x,y;
        cin >> n >> x >> y;

        vector<long long>a(n);
        for(int i = 0;i < n;i++)cin >> a[i];

        long long ans = 0;

        // total possible transfers
        long long total_tranfers = 0;

        for(int i = 0;i < n;i++){
            total_tranfers += (a[i]/x)*y;
        }

        // Picking each bank as final and then calculating the sum
        // and then taking the max whichever bank has max
        for(int i = 0;i < n;i++){
            long long final_money = total_tranfers - (a[i]/x)*y + a[i];
            ans = max (ans,final_money);
        }

        cout << ans << "\n";
    }

    return 0;
}
