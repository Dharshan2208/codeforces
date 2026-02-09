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

        for(int i = 0;i < n;i++)cin >> a[i];

        sort(a.begin(),a.end());
        long long min_elem = a[0];

        for(int i = 0;i < n;i++){
            a[i] = a[i] - min_elem;
        }

        int ans = 1;
        int curr = 1;

        for(int i = 1;i < n;i++){
            if(a[i] == a[i-1]) continue;
            else if(a[i] == a[i-1]+1){
                curr ++;
            }else{
                curr = 1;
            }

            ans = max(ans,curr);
        }

        cout << ans << "\n";
    }

    return 0;
}
