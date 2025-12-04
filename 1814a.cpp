#include <bits/stdc++.h>
using namespace std;

int main() {
    int  t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n >> k;

        if(k == 1 || n == k){
            cout << "YES" << "\n";
        }else if(n%2 == 0){
            cout << "YES" << "\n";
        }else if((n-k)%2 == 0){
            cout << "YES" << "\n";
        }else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}

// logic think its divisible by 2 then for y = 0 there exist x
// for odd n we can take y = 1 and then n-k should be divisble by 2 ..which must ..or else no

