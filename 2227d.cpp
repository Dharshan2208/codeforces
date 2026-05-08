#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ll> vll;

typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define pb push_back
#define ff first
#define ss second

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

/* Input */
#define in(x) cin >> x
#define vin(v,n) vector<int> v(n); for(auto &it : v) cin >> it
#define vllin(v,n) vector<ll> v(n); for(auto &it : v) cin >> it

/* Output */
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int INF = 1e9;
const ll LINF = 1e18;

void solve() {
    int n;
    in(n);

    int size = 2*n;

    vll a(size);
    int fz = -1;
    int sz = -1;

    for(int i = 0;i < size;i++){
        cin >> a[i];
        if(a[i] == 0){
            if(fz == -1)fz = i;
            else sz = i;
        }
    }

    int ans = 0;

    auto expandPalindrome = [&](int left, int right) {

        // expand while palindrome
        while (
            left >= 0 &&
            right < size &&
            a[left] == a[right]
        ) {
            left--;
            right++;
        }

        // restore last valid palindrome
        left++;
        right--;

        // mark numbers present in palindrome
        vector<bool> present(n + 1, false);

        for (int i = left; i <= right; i++) {
            present[a[i]] = true;
        }

        // compute mex
        int mex = 0;

        while (present[mex])
            mex++;

        ans = max(ans, mex);
    };

    // palindrome centered at first 0
    expandPalindrome(fz, fz);

    // palindrome centered at second 0
    expandPalindrome(sz, sz);

    // palindrome using both zeros symmetrically
    if ((fz + sz) % 2 == 0) {
        int center = (fz + sz) / 2;

        expandPalindrome(center, center);
    }
    else {
        int leftCenter = (fz + sz) / 2;
        int rightCenter = leftCenter + 1;

        expandPalindrome(leftCenter, rightCenter);
    }

    cout << ans << "\n";
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
