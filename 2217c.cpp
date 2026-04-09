#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        long long n,m,a,b;
        cin >> n >> m >> a >> b;


        long long g1 = __gcd(n, a);
        long long g2 = __gcd(m, b);

        // g1 == 1 and g2 == 1
        // still shit failing
        // 3411 4134 32 23

        // to cover evry block this need to be less than 2
        long long g3 = __gcd(n,m);

        
        if(g1 == 1 && g2 == 1 && g3 <= 2){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }        
    }

    return 0;
}
