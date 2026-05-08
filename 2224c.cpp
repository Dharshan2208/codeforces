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

bool isRegular(string s) {
    int cnt = 0;

    for (char c : s) {
        if (c == '(') cnt++;
        else cnt--;

        if (cnt < 0) return false;
    }

    return (cnt == 0);
}

void solve() {
    int n;
    in(n);

    string a,b;
    in(a);
    in(b);
    
    if(isRegular(a) && isRegular(b)) yes;
    else if(a[0] == ')' || b[0] == ')')no;
    else if(a[n-1] == '(' || b[n-1] == '(')no;
    else{    
        int p = 0;
        for(int i = 0;i < n;i++){
            if(a[i] != b[i]){
                if(p % 2 == 0){
                    a[i]=')';
                    b[i]='(';
                }
                else{
                    a[i]='(';
                    b[i]=')';

                }
                p++;
            }
        }

        // cout << a << " " << b << "\n";
        if(isRegular(a) && isRegular(b)) yes;
        else no;
    }
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
