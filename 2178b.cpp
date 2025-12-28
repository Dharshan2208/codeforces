#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        int ans = 0;

        if (s[0] == 'u') {
            ans += 1;
            s[0] = 's';
        }
        if (s[n-1] == 'u') {
            ans += 1;
            s[n-1] = 's';
        }

        vector<int> pos;
        for (int i = 0; i < n; i++) {
            if (s[i] == 's') pos.push_back(i);
        }

        for (int i = 0; i + 1 < pos.size(); i++) {
            int gap = pos[i + 1] - pos[i] - 1;
            if (gap % 2 == 0) { // even gap
                ans += gap / 2;
            } else if (gap >= 3) {
                ans += (gap - 1) / 2;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
