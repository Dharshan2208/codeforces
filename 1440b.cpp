#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n >> k;

        int s = n*k;
        vector<long long> a(s);

        for(int i = 0;i<n*k;i++)cin >> a[i];
        sort(a.begin(),a.end());

        long long last = s;
        long long sum = 0;

        while(k--){
            last -= (n/2 + 1);
            sum += a[last];
        }

        cout << sum << "\n";

    }

    return 0;
}
