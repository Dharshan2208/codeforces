#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;

        long long ans = 0;

        for(long long num = 1;num <= 9 && ans == 0; num++){
            long long p = 10;

            for(int d = 1;d<=18;d++){
                long long temp = x*p + num;

                if(temp % (x+num) == 0){
                    ans = num;
                    break;
                }

                p = p*10;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
