#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long x,y;
        cin >> x >> y;

        long long gcd = 0;
        long long moves = 0;
        if(x == y){
            cout << 0 << " " << 0 << "\n";
        }else if(x == y-1 || y == x-1){
            cout << 1 << " " << 0 << " " << "\n";
        }else{
            gcd = abs(x-y);
            moves = min(y%gcd,gcd -y%gcd);

            cout << gcd << " " << moves << "\n";
        }
    }

    return 0;
}
