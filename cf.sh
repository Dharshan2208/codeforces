#!/bin/zsh

if [ -z "$1" ]; then
    echo "Usage: cf <filename_without_extension>"
    exit 1
fi

FILE="$1.cpp"

if [ -f "$FILE" ]; then
    echo "$FILE already exists!"
    exit 1
fi

cat << 'EOF' > "$FILE"
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
EOF

echo "Created $FILE"
