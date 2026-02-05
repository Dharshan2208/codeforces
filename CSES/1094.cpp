#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    long long n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0;i < n;i++)cin >> a[i];

    long long ans = 0;
    for(int i = 1;i < n;i++){
        if(a[i] < a[i-1]){
            ans += a[i-1] - a[i];
            a[i] = a[i] + (a[i-1] - a[i]);
        }
    }

    cout << ans << "\n";
    return 0;
}
