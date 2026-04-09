#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long n,c,k;
        cin >> n >> c >> k;

        vector<long long> a(n);
        for(int i = 0;i < n;i++)cin >> a[i];

        sort(a.begin(),a.end());

        long killed = 0;
        for(int i = 0;i < n;i++){
            if (a[i] <= c){
                long long use = min(k,c-a[i]);
                a[i] += use;
                k -= use;
                
                c += a[i];
            }else{
                break;
            }
        }

        cout << c << "\n";
    }

    return 0;
}
