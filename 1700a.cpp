#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long n,m;
        cin >> n >> m;

        long long ans_1 = m*(m+1)/2;
        long long ans_2 = m*(n+1)*n/2;

        long long ans = ans_1 + ans_2 - m ;

        cout << ans << "\n";
    }

    return 0;
}
