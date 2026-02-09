#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long n,w;
        cin >> n >> w;

        long long fences = ceil(n/w);
        long long ans = n - fences;

        cout << ans << "\n";
    }

    return 0;
}
