#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x0,n;
        cin >> x0 >> n;

        long long ans;

        if(n%4 == 1){
            ans = -n;
        }else if(n%4 == 2){
            ans = 1;
        }else if(n%4 == 3){
            ans = n+1;
        }else if(n%4 == 0){
            ans = 0;
        }

        if(x0%2 == 0){
            ans = x0 + ans;
        }else{
            ans = x0 - ans;
        }

        cout << ans << "\n";
    }
    return 0;
}
