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

    sort(all(a));
    ll temp_max = a[n-1];

    vll ans;
    ans.pb(temp_max);

    map<ll,int> freq;
    for(ll x : a)freq[x]++;

    freq[temp_max]--;

    // distinct increasing first
    for(auto &[x,c] : freq){
        if(c > 0){
            ans.push_back(x);
            c--;
        }
    }

    // remaining duplicates
    for(auto &[x,c] : freq){
        while(c--){
            ans.push_back(x);
        }
    }

    ll op = 0;

    set<ll> s;
    ll curr_max = 0;
    ll mex = 0;

    for(ll x : ans){
        s.insert(x);
        curr_max = max(curr_max,x);

        while(s.count(mex)) mex++;

        op += mex + curr_max;
    }
    
    cout << op << "\n";
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
