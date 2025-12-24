#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0;i <n;i++)cin >> a[i];

        long sum = 0;
        for (int i = 0; i < n - 1; i++) {
            sum += abs(a[i] - a[i + 1]);
        }

        long ans = sum;

        long first_floor_diff = abs(a[0]-a[1]);
        long last_floor_diff = abs(a[n-1] - a[n-2]);

        ans = min(ans,sum-first_floor_diff);
        ans = min(ans,sum-last_floor_diff);

        long diff_prev = 0;
        long diff_after = 0;
        long diff_removal = 0;

        for(int i = 1;i < n-1;i++){
            long curr = sum;

            diff_prev = abs(a[i-1] - a[i]);
            diff_after = abs(a[i] - a[i+1]);
            diff_removal = abs(a[i-1] - a[i+1]);

            curr -= diff_prev;
            curr -= diff_after;

            curr += diff_removal;
            ans = min(ans,curr);
        }

        cout << ans << "\n";

    }

    return 0;
}
