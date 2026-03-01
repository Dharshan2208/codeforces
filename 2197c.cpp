#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long p,q;
        cin >> p >> q;

        __int128 num1 = (__int128_t) 3*p;
        __int128 num2 = (__int128_t) 2*q;

        if(num1 >= num2 && p<q){
            cout << "Bob" << "\n";
        }else{
            cout << "Alice" << "\n";
        }

    }

    return 0;
}
