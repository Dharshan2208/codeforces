#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin >> a >> b;

        long long ans = INT_MAX;

        for(int k = 0;k <= 30;k++){
            long long new_b = b + k;

            if(new_b == 1)continue;

            long long temp = a;
            long long ops = k;

            while(temp > 0){
                temp /= new_b;
                ops++;
            }

            ans = min(ans,ops);
        }

        cout << ans << "\n";
    }

    return 0;
}
