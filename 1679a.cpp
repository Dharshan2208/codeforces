#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if(n < 4 || n%2 == 1){
            cout << -1 << "\n";
        }else{
            long long max_buses;
            long long min_buses;
            max_buses = n/4;
            min_buses = (n+5)/6;

            cout << min_buses << " " << max_buses << "\n";
        }
    }
    return 0;
}
