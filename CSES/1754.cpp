#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin >> a >> b;

        if((a+b) % 3 == 0)cout << "YES" << "\n";
        else cout << "NO" << "\n";

    }

    return 0;
}
