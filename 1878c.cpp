#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,k,x;
        cin >> n >> k >> x;

        // sum of first k numbers - min sum
        long long min_sum = (k*(k+1))/2;

        // sum of last k nums - max sum
        long long max_sum = (n*(n+1))/2 - ((n-k)*(n-k+1))/2;

        if(x >= min_sum && x <= max_sum){
            cout << "YES" << "\n";
        }else{
            cout << "NO" <<  "\n";
        }
    }
    return 0;
}

