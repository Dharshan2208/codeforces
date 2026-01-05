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

        vector<int> a(n);

        int count_one = 0;
        int count_zero = 0;
        int count_minus_one = 0;

        for(int i = 0;i < n;i++){
            cin >> a[i];

            if(a[i] == 0){
                count_zero++;
            }else if(a[i] == 1){
                count_one++;
            }else{
                count_minus_one++;
            }
        }

        int ans = 0;
        if(count_minus_one %2 == 1){
            ans = ans + 2;
        }

        ans = ans + count_zero;

        cout << ans << "\n";

    }

    return 0;
}
