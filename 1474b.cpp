#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    const int N = 300000;
    vector<bool> is_prime(N, true);
    vector<int> primes;

    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < N; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (long long j = 1LL * i * i; j < N; j += i) {
                is_prime[j] = false;
            }
        }
    }

    int t;
    cin >> t;

    while (t--) {
        int d;
        cin >> d;

        auto it1 = lower_bound(primes.begin(), primes.end(), d + 1);
        long long p = *it1;

        auto it2 = lower_bound(primes.begin(), primes.end(), p + d);
        long long q = *it2;

        cout << p * q << "\n";
    }

    return 0;
}