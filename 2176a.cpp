#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int ans = 0;
        if(is_sorted(a.begin(),a.end())){
            ans = 0;
        }else{
            int i = 0;

            while (i + 1 < a.size()) {
                if (a[i] > a[i + 1]) {
                    a.erase(a.begin() + i + 1);
                    ans++;
                } else {
                    i++;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}