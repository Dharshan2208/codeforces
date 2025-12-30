#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;

        vector<long long> a(n),b(n),c(n);

        for(int i = 0;i < n;i++)cin >> a[i];
        for(int i = 0;i < n;i++)cin >> b[i];
        for(int i = 0;i < n;i++)cin >> c[i];

        long long AB = 0;
        long long BC = 0;

        for (int i = 0; i < n; i++) {
            bool flag = true;
            for (int j = 0; j < n; j++) {
                if (a[j] >= b[(j + i) % n]) {
                    flag = false;
                    break;
                }
            }
            if (flag) AB++;
        }

        for (int i = 0; i < n; i++) {
            bool flag = true;
            for (int j = 0; j < n; j++) {
                if (b[j] >= c[(j + i) % n]) {
                    flag = false;
                    break;
                }
            }
            if (flag) BC++;
        }

        long long ans = n*AB*BC;
        cout << ans << "\n";
    }

    return 0;
}
