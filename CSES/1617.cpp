#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int n;
    long long mod = 1e9 + 7;

    cin >> n;

    long long ans = 1;
    for(int i = 0;i < n;i++){
        ans = (ans*2)%mod;
    }

    cout << ans << "\n";
    return 0;
}
