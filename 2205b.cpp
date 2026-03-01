#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long temp = n;
        long long ans = 1;

        for(long long i = 2; i*i <= temp;i++){
            if(temp % i == 0){
                ans *= i;
                // for getting all the unique prime factor
                while(temp % i == 0)temp/=i;
            }
        }

        // if remaining no is prime so
        if(temp > 1)ans *= temp;

        cout << ans << "\n";
    }

    return 0;
}
