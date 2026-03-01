#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using int64 = long long;
using i128 = __int128_t;

bool feasible(int64 k, int64 s, int64 m) {
    i128 rem = s;
    for (int b = 60; b >= 0; --b) {
        if (rem == 0) return true;

        // bit b present in m?
        if (!((m >> b) & 1LL)) continue;

        // how many 2^b units we still need (count, not value)
        i128 needCount = rem >> b; // how many 2^b units are needed from remaining sum
        i128 capCount = (i128)k;   // across k numbers we can have at most k ones at this bit
        i128 take = needCount <= capCount ? needCount : capCount;
        rem -= (take << b);
    }
    return rem == 0;
}


int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int64 s, m;
        cin >> s >> m;

        // s must be multiple of lowest bit(m)
        int64 lowbit = (m & -m);
        if (s % lowbit != 0) {
            cout << -1 << '\n';
            continue;
        }
        // need at least ceil(s/m) numbers
        int64 lo = (s + m - 1) / m;
        int64 hi = s;
        int64 ans = -1;
        while (lo <= hi) {
            int64 mid = lo + ((hi - lo) >> 1);
            if (feasible(mid, s, m)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        cout << ans << '\n';


    }
    return 0;
}
