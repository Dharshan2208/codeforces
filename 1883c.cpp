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

        int ans = INT_MAX;
        int even_count = 0;

        for(int i = 0;i < n;i++){
            cin >> a[i];

            if(a[i] %2 == 0)even_count ++;
            if(a[i] % k == 0)ans = 0;
            ans = min(ans,k-(a[i]%k));
        }

        if(k == 4){
            if(even_count >= 2) ans = min(ans,0);
            else if(even_count == 1) ans = min(ans,1);
            else if(even_count == 0) ans = min(ans,2);
        }

        cout << ans << "\n";

    }

    return 0;
}
