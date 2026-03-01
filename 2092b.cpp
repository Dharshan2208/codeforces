#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string a,b;
        cin >> a;
        cin >> b;

        long long ones_comp1 = 0, ones_comp2 = 0;
        long long b_slots_comp1 = 0, b_slots_comp2 = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 1) {
                // odd index
                if (a[i] == '1') ones_comp1++;
                if (b[i] == '1') ones_comp2++;

                b_slots_comp2++;
            } else {
                // even index
                if (a[i] == '1') ones_comp2++;
                if (b[i] == '1') ones_comp1++;

                b_slots_comp1++;
            }
        }

        if (ones_comp1 <= b_slots_comp1 &&
            ones_comp2 <= b_slots_comp2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }

    return 0;
}
