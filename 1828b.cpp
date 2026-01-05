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

        long long ans = 0;

        // find the difference between all the elems and the i value
        // and then take the gcd and that the asnwer
        for(int i = 1;i <= n;i++){
            int elem;
            cin >> elem;

            ans = gcd(ans,abs(elem-i));
        }

        cout << ans << "\n";
    }

    return 0;
}
