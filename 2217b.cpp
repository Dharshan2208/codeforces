#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int p;
        cin >> p;
        p--; 

        int x = a[p];

        int leftNeed = 0;
        int curr = x;

        for (int i = p - 1; i >= 0; i--) {
            if (a[i] != curr) {
                leftNeed++;
                curr ^= 1; 
            }
        }

        int rightNeed = 0;
        curr = x;

        for (int i = p + 1; i < n; i++) {
            if (a[i] != curr) {
                rightNeed++;
                curr ^= 1;
            }
        }

        int ans = max(leftNeed, rightNeed);

        if (ans % 2 == 1) ans++;

        cout << ans << "\n";

    }

    return 0;
}
