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

    vllin(a,n);

    for(int i = n-2;i >= 0;i--){
        // Both are valid
        if(a[i] + a[i+1] > a[i]){
        // if(a[i+1] >= 0){
            a[i] += a[i+1];
        }
    }

    int count = 0;

    for(int i = 0;i < n;i++){
        if(a[i] > 0){
            count++;
        }
    }

    cout << count << "\n";
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
