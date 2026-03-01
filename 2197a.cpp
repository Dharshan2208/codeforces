#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

long long digitSum(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;

        // digit sum max = 90
        // y = x + dy
        //  x < y < x + 90
        

        long long ans = 0;

        for(long long y = x; y <= x + 90;y++){
            if(y - digitSum(y) == x){
                ans ++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
