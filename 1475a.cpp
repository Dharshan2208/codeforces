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

        while (n % 2 == 0)
			n /= 2;

		// After removing all factors of 2, if n is greater than 1,
		// it means n has an odd divisor greater than 1
		if (n > 1)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
            
    }

    return 0;
}
