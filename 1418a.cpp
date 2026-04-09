#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long x,y,k;
        cin >> x >> y >> k;

        // total = y*k(coals) + k (sticks)
        long long total = k*(y+1) - 1;

        // no of trades to get sticks
        long long trades = (total + (x-2))/(x-1);

        // then adding k for coals trades
        cout << trades + k << "\n";

    }

    return 0;
}

