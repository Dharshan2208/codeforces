#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;

        vector<int> a(n);
        int sum = 0;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            sum += a[i];
        }

        if (sum % 2 == 1 || (n * k) % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
