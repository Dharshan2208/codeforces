#include <bits/stdc++.h>
using namespace std;

int main() {
    long  t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        vector<int> b(n);
        long long zeroes = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if(b[i] == 0) zeroes++;
            sum += b[i];
        }

        cout << min(sum-n+1,n-zeroes) << "\n";
    }
    return 0;
}

