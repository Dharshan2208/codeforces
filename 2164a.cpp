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

        vector<long long> a(n);
        for(int i =0;i < n;i++)cin >> a[i];

        long long x;
        cin >> x;

        sort(a.begin(),a.end());

        if( x >= a[0] && x <= a[n-1]){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }

    }

    return 0;
}
