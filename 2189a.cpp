#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n,r,c;
        cin >> n >> r >> c;

        vector<int> a(n);

        for(int i = 0;i < n;i++)cin >> a[i];

        int ans = 0;
        int ans1 = 0;
        int ans2 = 0;

        for(int i = 0;i < n;i++){
            if(a[i] <= r)ans1++;
            if(a[i] <= c)ans2++;
        }
        
        if(ans2 > ans1){
            cout << min(ans1,ans2/2) << "\n";
        }else{
            cout << min(ans1/2,ans2) << "\n";
        }
    }

    return 0;
}
