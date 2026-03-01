#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n >> k;

        long long a,b,count;
        a = b = n;
        count = 0;

        while( k < a){
            count++;
            a /= 2;
            b = (b+1)/2;
        }

        if( k <= b )cout << count << "\n";
        else cout << -1 << "\n";
    }

    return 0;
}
