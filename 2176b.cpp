#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (count(s.begin(), s.end(), '0') == 0) {
            cout << 0 << "\n";
            continue;
        }

        string d = s + s;
        int best = 0, cur = 0;

        for (char c : d) {
            if (c == '0') {
                cur++;
                best = max(best, cur);
            } else {
                cur = 0;
            }
        }
        best = min(best, n);
        cout << best << "\n";

    }
    return 0;
}