#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n,m,d;
        cin >> n >> m >> d;

        int ans = 0;
        int max_one_row = d/m + 1;

        ans = (n + max_one_row - 1)/max_one_row;

        cout << ans << "\n";
    }

    return 0;
}
