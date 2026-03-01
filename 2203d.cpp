#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        vector<int> b(m);

        for (int i = 0; i < n; i++)cin >> a[i];
        for (int i = 0; i < m; i++)cin >> b[i];

        unordered_set<int> unq(a.begin(), a.end());

        long long Alice = 0;

        for (int y : b) {
            bool found = false;

            for (int d = 1; d * d <= y; d++) {
                if (y % d == 0) {
                    if (unq.count(d) || unq.count(y / d)) {
                        found = true;
                        break;
                    }
                }
            }

            if (found) Alice++;
        }

        long long Bob = m - Alice;

        if (Alice > Bob)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }

    return 0;
}
