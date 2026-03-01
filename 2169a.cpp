#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n,a;
        cin >> n >> a;

        vector<long long>v(n);
        for(int i = 0;i < n;i++)cin >> v[i];

        int cnt1=0,cnt2 = 0;
        sort(v.begin(),v.end());

        for(int i = 0;i < n;i++){
            if(v[i] <= a)cnt1++;
            if(v[i] >= a)cnt2++;
        }

        if(cnt1 < cnt2)cout << a+1 << "\n";
        else cout << a - 1 << "\n";

    }

    return 0;
}
