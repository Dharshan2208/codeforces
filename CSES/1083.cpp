#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    long long n;
    cin >> n;
    long long sum = 0;

    vector<long long> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
        sum += a[i];
    }

    long long expected_sum = n*(n+1)/2;
    cout << expected_sum - sum << "\n";

    return 0;
}
